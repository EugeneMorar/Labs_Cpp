#include <iostream>
#include <vector>


using namespace std;

int main() {
    int N, M, K, a, b;
    cin >> N;
    cin >> M;
    cin >> K;

    vector <pair<int, int>> coord_list;
    coord_list.reserve(K);

    vector <vector <int>> field;
    field.reserve(N);

    vector <int> field_row(M, 0);


    for (int i = 0; i < N; i++)
        field.push_back(field_row);

    for (int i = 0; i < K; i++) {
        cin >> a;
        cin >> b;
        coord_list.push_back(make_pair(a-1, b-1));
    }

    for (auto it : coord_list) {
        for (int i = it.first - 1; i < it.first + 2; i++) {
            for (int j = it.second - 1; j < it.second + 2; j++)
                if (i > -1 and j > -1 and i < N and j < M)
                    (field[i])[j] += 1;
        }
    }

    for (auto it : coord_list)
        (field[it.first])[it.second] = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << (field[i])[j] << " ";
        cout << '\n';
    }

    return 0 ;
}