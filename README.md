# baekjoon

baekjoon solve adventure

모든 문제는 solved.ac에 있는 class n++ 문제들입니다! 참고하십셔.<br>
아마 class 4++ 내지는 5++정도까지 풀어볼 심산입니다.<br>
너무 쉬운 새싹 문제들은 생략합니다(class 1++에 좀 있음). 브론즈부터는 쉬워도 다 풀어놓을게요.<br>
그 진짜 안나올만한 애들은 가끔씩 생략합니다. 막 너무 딥한거나, 그래프 알고리즘에서 dfs, bfs, 다익스트라 빼고는 굳이 풀 필요가 없습니다<br>
언어는 C++임다.<br>
참고로 velog도 운영 중이니까 놀러오세요. https://velog.io/@tmakdrl/posts<br>
궁금한 건 벨로그 저기에 남겨도 되고, tmakdrl@naver.com 여기 이메일로 물어보셔도 됩니다. 편히 물어보세요.<br>
추가로 저는 code snippet으로 기본적인 템플릿을 맹글어놓았습니다. 쓰고 싶으면 저한테 연락하거나, gpt를 이용하십셔.<br>
모든 코드는 헷갈리는 파트는 주석 다 넣어보긴 할게요 최대한.<br>
공지는 여기까지입니다 ㅅㄱ<br>

**(내 기준)어려운 문제 정리**
10250 - ACM 호텔: 브론즈 문제라도 예외 1도 신경 안쓰고 풀었다 ㅈㄴ 틀림. 예외 신경 써야돼요
1152 - 단어의 개수: 어려운 문제라기 보다는, 공백을 포함해서 입력을 받는 법을 알아야 됩니다(cin.getline 사용). 근데 밑에 4949번에 또 다른 방법 하나 있어요
2292 - 벌집: 문제 자체는 어렵지 않은데, 규칙 찾는데 은근 오래 걸림(나만 그런듯요). 그리고 코드 간단하게 줄이려고 하다가 뇌를 은근 많이 썼습니다
1546 - 평균: 문제 자체는 굉장히 쉬운데, 그 int와 double을 넘나들며 잘 이렇게 자료형 막 이리저리 하는게 쨌든 어려움. 이 문제에서 확실히 익히고 갑시다
10989 - 수 정렬하기 3: 우리가 흔히 아는대로 정렬을 하면 시간이나 메모리 초과가 난다. 그래서 좀 신박한 방식으로 해줘야 되는데 그게 좀 어려움;
1181 - 단어 정렬: 사용자 지정 정렬 함수랑 중복 제거하는 법을 알아야 풀 수 있어서 이거 풀면서 외웁시다
1436 - 영화감독 숌: 뭔가 기술이 필요한 문제는 아닌데, 코드를 좀 깔끔하게 정리하고 짜는 법을 알아야 됨. 막 짜면 너무 지저분해질 수 있는 문제...
10814 - 나이순 정렬: 여기다가 기술을 쓰면 바로 스포가 될거 같긴한데, 이건 그냥 sort로는 못 풀고, stable_sort라는 애를 써야 풀 수 있음. 이게 뭔지 여기서 외우고 갑시다
1018 - 체스판 다시 칠하기: 특정 기술이 필요한 문제는 아닌데, 은근 머리 아픔. 한번쯤 다시 풀어볼만은 할듯
1920 - 수 찾기: 여기다가 기술 쓰면 바로 스포되긴 하는데, 그 binary search(이진탐색 혹은 이분탐색)라는 친구를 써야 됨. 여기서 확실히 익히고 갑시데이
2839 - 설탕 배달: 뭔가 대놓고 어려운 기술이 있거나 그러진 않은데, 그래도 약간 어려웠어서 한 번 다시 풀어볼만할듯
4949 - 균형잡힌 세상: 딴건 아니고, 1152번에서 이제 cin.getline(s, 100001); 이런식으로 했는데, string 쓰면 getline(cin, str); 이렇게도 쓸 수 있슴다.
그리고 스택 쓸 때 항상 empty일 때 pop하거나 top 안찾게 조심(큐도 마찬가지). 마지막으로 스택 여러번 쓸 때는 마지막에 항상 while문과 pop 이용해서 비워주기!
10816 - 숫자 카드 2: 이분 탐색으로도 풀 수 있긴 한데(upper_bound, lower_bound 이용하면 좀 쉬움), 기본적으로는 map으로 푸는 것이 가장 쉽습니다. 그래서 이 문제를 풀면서 map에 대해 공부하고 가면 좋을듯!
추가로 관련해서 주요 정보 하나만 적자면, 벡터는 선언하고 바로 v[30]=1 이런식으로 특정 인덱스에 접근이 안됩니다. 무조건 크기를 할당하고 접근해야 됩니다. 근데 map은 그냥 바로 접근이 됩니다. 초기값은 0이에요.
1966 - 프린터 큐: 잘 풀긴 했는데, 나름대로 뇌 조금은 써야 되는 구현 문제라고 생각해서 한번쯤 다시 풀어봐도 나쁘지 않을듯
1654 - 랜선 자르기: 여기서 말하면 스포인데 어쨌든 특정 알고리즘의 대표 문제임(ㅇㅂㅌㅅ)
1874 - 스택 수열: 특정 기술이 필요한건 아닌데, 그냥 어려워서 한번 더 풀어봐도 낫밷일듯
11723 - 집합: 꼭 set으로 풀 필요는 없는데, set으로 풀면 좀 편하고, 이번 기회에 set에 대해 가볍게 배워보는 것도 좋을 듯 합니다. 그리고 주석에 적어놓긴 했는데, 이 문제에 엄청난 킥이 하나 들어가있습니다!
2579 - 계단 오르기: DP의 대표격 문제라서, 한번쯤 다시 풀어보는 것도 나쁘진 않을듯 합니다. 어렵진 않아요(코드도 간단).
9375 - 패션왕 신해빈: 문제 자체는 쉬운데, auto it(iterator)를 사용해서 map을 순회하는 법을 배울 수 있는 문제라서 한번쯤 풀어보면 좋을듯합니데이(key가 int가 아니라 다른거라면 어떻게 순회할지에 대한 답을 주는 문제)
11659 - 구간 합 구하기4: 누적합(내지는 구간합) 문제는 하나 정도는 풀 줄 알면 죠슴다. 그래도 누적합이 이런거구나~ 정도는 알아야 되지 않을까...
17626 - Four Squares: 오랜만에 어떻게 해야될지 감도 안잡히는 문제였다는 점... dp로 푼다는 것도 감이 안왔고, dp로 푸는걸 알고 나서도 좀 헷갈렸슴다. 저만 그런건가요?
1012 - 유기농 배추: 되게 기본적인 bfs 문제인데, 오랜만에 bfs를 건드려서 그런가 약간 헤맸습니다.... 여러분들도 한번쯤 다시 푸는걸 추천 드립니다
1260 - DFS와 BFS: dfs/bfs의 근본 문제니까 꼭 다시 한번쯤 풀어보도록 합시다(변수 선언부터 함수 만드는거까지 모두 하나하나 섬세하게 하자)
1541 - 잃어버린 괄호: 이전에 푼 코드는 너무 복잡했는데, GPT의 도움을 약간 받고 사고의 전환을 한 뒤에 훨씬 더 쉽게 풀어냈슴다
1927 - 최소 힙: priority queue와 최소 힙, 최대 힙 등에 대해서 알 수 있는 좋은 기회에유
2630 - 색종이 만들기: 뭔가 특정 기술이 쓰이는 문제는 아니긴한데, 나름대로 머리 쓰면 쉽게 풀 수 있는 재밌는 문제니까 한번 풀어봅시다
2805 - 나무 자르기: 이분탐색 국밥 문제인데, 나름 페이크들이 좀 들어있어서 풀만합니다
18870 - 좌표 압축: 어차피 중복 제거 + 정렬이 필요해서 set으로 풀었는데, set으로 lower_bound를 쓰려면 distance라는 함수를 써야 됩니다. 근데 얘가 시간복잡도가 O(n)이라 시간초과가 나서, 결국 그냥 벡터로 풀었어요;
참고로 lower_bound, upper_bound는 처음 나오는 위치를 iterator로 반환합니당. v.begin()이랑 v.end()도 iterator에요. 그리고 v.begin()을 빼면 위치를 인덱스로 변환한다는 뜻으로 보면 돼요(자세한 건 주석에 있음)
30804 - 과일 탕후루: 투 포인터, 내지는 슬라이딩 윈도우라는 놈을 써서 푸는건데, 코드는 간단한데, 문제 난이도 자체는 꽤 어려웠던 거 같아요. 최근에 푼 거 중에선 제일 빡셌던거 같아요. 자세한 건 주석 참고
2178 - 미로 탐색: 전형적인 bfs 문제인데, 나름대로 가져갈만한 팁이 하나 있음. 보통은 이제 pair<int, int>로 row랑 col을 담는데, 그거 이외에 또 담을 정보가 필요하면 그냥 구조체를 하나 만들어서 row랑 col을 묶어주면 됨
5525 - IOIOI: 막 어려운 기술 쓰고 그런 문제는 아닌데, 시간 초과 관리도 잘해야되고 은근 어렵다고 생각합니데이
