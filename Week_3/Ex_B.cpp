#include <iostream>
#include <vector>
#include <tuple>


using namespace std;

int main() {
    int N, M, K, a, b;
    cin >> N;
    cin >> M;
    cin >> K;

    vector <tuple<int, int>> coord_list;
    coord_list.reserve(K);

    vector <vector <int>> field;
    field.reserve(N);

    vector <int> field_row(M, 0);


    for (int i = 0; i < N; i++) {
        field.push_back(field_row);
    }

    for (int i = 0; i < K; i++) {
        cin >> a;
        cin >> b;
        coord_list.push_back(make_tuple(a-1, b-1));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (auto it : coord_list) {
                if ((((get<0>(it) >= i-1) and (get<0>(it) <= i+1))
                and ((get<1>(it) >= j-1) and (get<1>(it) <= j+1)))
                and (get<0>(it) != i and get<1>(it) != j))
                    (field[i])[j] += 1;
                if ((get<0>(it) == i and ((get<1>(it) >= j-1) and (get<1>(it) <= j+1)))
                    and get<1>(it) != j)
                    (field[i])[j] += 1;
                if ((get<1>(it) == j and (get<0>(it) >= i-1) and (get<0>(it) <= i+1)
                and (get<0>(it) != i)))
                    (field[i])[j] += 1;
                }
            }
        }

    for (auto it : coord_list)
        (field[get<0>(it)])[get<1>(it)] = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << (field[i])[j] << " ";
        cout << '\n';
    }

    return 0 ;
}