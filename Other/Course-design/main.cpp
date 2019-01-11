#include <iostream>

using namespace std;

struct term //顺序表和链表的定义
{
    float mod; //系数（modulus）
    int exp;   //指数（exponent）
};

struct LNode {
    term data;      //term 多项式值
    struct LNode *next;
};

typedef LNode *polynomail;   //给LNode*别名 多项式

/*
 * 合并同类项
 * */
polynomail merge(polynomail Head) {
    polynomail r, q, p, Q;  //q指向当前节点，p指向p的下一个节点
    for (q = Head->next; q != NULL; q = q->next) { //遍历链表，合并同类项
        for (p = q->next, r = q; p != NULL;) {
            if (q->data.exp == p->data.exp) { //指数相等，系数相加
                q->data.mod = q->data.mod + p->data.mod;
                r->next = p->next;
                Q = p;
                p = p->next;
                delete Q;   //释放p;
            } else {
                r = r->next;
                p = p->next;
            }
        }
    }
    return Head;  //返回不含同类项的多项式
}

/*
 * 根据指数由大到小排列
 * */
void descendsort(polynomail P) {
    polynomail h = P, p, q, r;
    for (p = P; p->next != NULL; p = p->next);
    r = p;
    while (h->next != r) {  //大的放到队尾
        for (p = h; p->next != r && p != r; p = p->next) {
            if (p->next->data.exp > p->next->next->data.exp) {//比较指数大小
                q = p->next->next;
                p->next->next = q->next;  //指数大的向前移动
                q->next = p->next;
                p->next = q;
            }
        }
        r = p; //r指向参与比较的最后一个，不断向前移动；
    }
};

/*
 * 根据指数由小到大排列
 * */
void ascendsort(polynomail P) {
    polynomail h = P, p, q, r;
    for (p = P; p->next != NULL; p = p->next);
    r = p;
    while (h->next != r) {  //小的放到队尾
        for (p = h; p->next != r && p != r; p = p->next) {
            if (p->next->data.exp < p->next->next->data.exp) {//比较指数大小
                q = p->next->next;
                p->next->next = q->next;  //指数小的向后移动
                q->next = p->next;
                p->next = q;
            }
        }
        r = p; //r指向参与比较的最后一个，不断向前移动；
    }
};

/*
 * 判断多项式的稀疏
 * */
bool judge(polynomail Head) {
    ascendsort(Head);
    polynomail p;
    p = Head->next;
    bool flag = false;
    while (p != NULL && p->next != NULL && !flag) {
        if (p->data.exp - p->next->data.exp > 1)
            flag = true;
        p = p->next;
    }
    return flag;
}

/*
 * 打印多项式，求项数
 * */
void printpolyn(polynomail P) {
    int i;
    polynomail q;
    if (P == NULL) {
        cout << "该多项式不存在" << endl;
    } else if (P->next == NULL) {
        cout << "M(x)=0" << endl;
    } else {
        cout << "该多项式为 M(x)= ";
        q = P->next;
        i = 1;
        if (q->data.mod != 0 && q->data.exp != 0) {
            cout << q->data.mod << "X^" << q->data.exp;
            i++;
        }
        if (q->data.exp == 0 && q->data.mod != 0)
            cout << q->data.mod;  //只有常数项
        q = q->next;
        if (q == NULL) {
            cout << endl;
            return;
        }
        while (1) { //通过循环打印剩下的所有系数非零项
            if (q->data.mod != 0 && q->data.exp != 0) {
                if (q->data.mod > 0)  //系数为-不用自己输出负号
                    cout << "+";
                cout << q->data.mod << "X^" << q->data.exp;
                i++;
            }
            if (q->data.mod != 0 && q->data.exp == 0) {
                if (q->data.mod > 0)  //最后一项常数项
                    cout << "+";
                cout << q->data.mod;
            }
            q = q->next;
            if (q == NULL) {  //全部输出完成，跳出循环
                cout << endl;
                break;
            }
        }
    }
}

/*
 * 创建并初始化多项式链表
 * */
polynomail createpolyn(int m) {
    polynomail Head, r, t;
    Head = new LNode;
    r = Head;
    for (int i = 0; i < m; i++) {
        t = new LNode;
        cout << "请输入第 " << i + 1 << " 项的系数和指数 ：";
        cin >> t->data.mod >> t->data.exp;
        r->next = t;
        r = t;
    }
    r->next = NULL;
    if (m > 1) {  //项数大于1，合并同类项
        Head = merge(Head);
    }
    return Head;
}

/*
 * 两多项式相加
 * */
polynomail addpolyn(polynomail Pa, polynomail Pb) {
    polynomail q, p, r, t, newHead;
    int i;
    p = Pa->next;
    q = Pb->next;
    newHead = new LNode;
    r = newHead;

    //把数据全部插入到r中；
    while (p) {
        t = new LNode;
        t->data.mod = p->data.mod;
        t->data.exp = p->data.exp;
        r->next = t;
        r = t;
        p = p->next;
    }
    while (q) {
        t = new LNode;
        t->data.mod = q->data.mod;
        t->data.exp = q->data.exp;
        r->next = t;
        r = t;
        q = q->next;
    }
    r->next = NULL;  //链表尾部处理
    if (newHead->next != NULL && newHead->next->next != NULL) {  //合并同类项
        newHead = merge(newHead);
    }

    cout << "请选择输出方式：1—指数升序  2—指数降序" << endl;
    cout << "选择： ";
    cin >> i;
    if (i == 1)
        descendsort(newHead);
    else
        ascendsort(newHead);
    return newHead;
}

/*
 * 两多项式相减
 * */
polynomail subpolyn(polynomail Pa, polynomail Pb) {
    polynomail q, p, r, t, newHead;
    int i;
    p = Pa->next;
    q = Pb->next;
    newHead = new LNode;
    r = newHead;

    //把数据全部插入到r中；
    while (p) {
        t = new LNode;
        t->data.mod = p->data.mod;
        t->data.exp = p->data.exp;
        r->next = t;
        r = t;
        p = p->next;
    }
    while (q) {
        t = new LNode;
        t->data.mod = -q->data.mod;  //此处改为-
        t->data.exp = q->data.exp;
        r->next = t;
        r = t;
        q = q->next;
    }
    r->next = NULL; //链表尾部处理
    if (newHead->next != NULL && newHead->next->next != NULL) {  //合并同类项
        newHead = merge(newHead);
    }

    cout << "请选择输出方式：1—指数升序  2—指数降序" << endl;
    cout << "选择： ";
    cin >> i;
    if (i == 1)
        descendsort(newHead);
    else
        ascendsort(newHead);
    return newHead;
}

/*
 * 两多项式相乘
 * */
polynomail mulpolyn(polynomail Pa, polynomail Pb) {
    polynomail q, p, r, t, newHead;
    int i;
    newHead = new LNode;
    r = newHead;
    for (p = Pa->next; p != NULL; p = p->next) {
        for (q = Pb->next; q != NULL; q = q->next) {
            t = new LNode;
            //系数相乘，指数相加
            t->data.mod = p->data.mod * q->data.mod;
            t->data.exp = p->data.exp + q->data.exp;
            r->next = t;
            r = t;
        }
    }
    r->next = NULL; //链表尾部处理
    if (newHead->next != NULL && newHead->next->next != NULL) {  //合并同类项
        newHead = merge(newHead);
    }
    cout << "请选择输出方式：1—指数升序  2—指数降序" << endl;
    cout << "选择： ";
    cin >> i;
    if (i == 1)
        descendsort(newHead);
    else
        ascendsort(newHead);
    return newHead;
}

/*
 * 销毁建立的多项式
 * */
void delpolyn(polynomail Pa, polynomail Pb) {
    polynomail p = Pa, q = Pb, t;
    while (p != NULL) {
        t = p;
        p = p->next;
        free(t);
    }
    while (q != NULL) {
        t = q;
        q = q->next;
        free(t);
    }
    cout << "两个多项式已被删除!" << endl;
}

int main() {
    polynomail Pa = NULL, Pb = NULL;
    polynomail addp = NULL, subp = NULL, mulp = NULL;
    char c;
    int m;
    while (1) {
        cout << endl << endl
             << "\t\t__________________________________________________ \n\n"
             << "\t\t     1-创建两个一元多项式    "
             << "2-两个一元多项式相加                \n"
             << "\t\t     3-两个一元多项式相减    "
             << "4-两个一元多项式相乘                \n"
             << "\t\t     5-销毁两个一元多项式    "
             << "Q-退出程序               \n"
             << "\t\t__________________________________________________ \n\n"
             << "你的操作：";
        cin >> c;

        if (c == '1') {
            if (Pa != NULL) {
                cout << "已经建立过一元多项式，请选择其他操作!" << endl;
                continue;
            }
            cout << endl;
            cout << "请开始输入第一个多项式！" << endl;
            cout << "您所需要输入的总项数为 ：";
            cin >> m;
            while (m <= 0) {
                cout << "m无效！请重新输入：";
                cin >> m;
            }
            Pa = createpolyn(m);
            printpolyn(Pa);
            if (judge(Pa))
                cout << "该多项式稀疏！" << endl;
            else
                cout << "该多项式稠密！" << endl;
            cout << endl;
            cout << "请开始输入第二个多项式！" << endl;
            cout << "您所需要输入的总项数为 ：";
            cin >> m;
            while (m <= 0) {
                cout << "m无效！请重新输入m：";
                cin >> m;
            }
            Pb = createpolyn(m);
            printpolyn(Pb);
            if (judge(Pb))
                cout << "该多项式稀疏" << endl;
            else
                cout << "该多项式稠密" << endl;
            continue;
        }
        if (c == '2') {
            if (Pa == NULL) {
                cout << "请先创建一个一元多项式！" << endl;
                break;
            }
            addp = addpolyn(Pa, Pb);
            printpolyn(addp);
            if (judge(addp))
                cout << "该多项式稀疏" << endl;
            else
                cout << "该多项式稠密" << endl;
            continue;
        }

        if (c == '3') {
            if (Pa == NULL) {
                cout << "请先创建一个一元多项式！" << endl;
                break;
            }
            subp = subpolyn(Pa, Pb);
            printpolyn(subp);
            if (judge(subp))
                cout << "该多项式稀疏" << endl;
            else
                cout << "该多项式稠密" << endl;
            continue;
        }

        if (c == '4') {
            if (Pa == NULL) {
                cout << "请先创建一个一元多项式！" << endl;
                break;
            }
            mulp = mulpolyn(Pa, Pb);
            printpolyn(mulp);
            if (judge(mulp))
                cout << "该多项式稀疏" << endl;
            else
                cout << "该多项式稠密" << endl;
            continue;
        }
        if (c == '5') {
            if (Pa == NULL) {
                cout << "请先创建一个一元多项式！" << endl;
                break;
            }
            delpolyn(Pa, Pb);
            continue;
        }

        if (c == 'Q' || c == 'q') {
            cout << "感谢使用！！" << endl;
            break;
        }
    }

    return 0;
}