## DS_project1_2020_2
### 2020-2 Data Structure Project #1

### Due date: 2020/10/9 23h 59m 59s.

### ((윈도우에서 리눅스로 단순 파일 복사 및 드래그는 파일 인코딩 변환 문제가 발생 할 수 있으니 
### 반드시 리눅스 환경에서 파일을 재생성 후 테스트 바랍니다!! ))


#### 본 프로젝트는 질병 관리 프로그램을 구현하는 것으로 상세한 설명은 프로젝트 문서와 다음 설명을 참고한다.
##### 본 프로젝트에서는 이진 탐색 트리(Binary Search Tree, BST)와 큐(Queue), 힙(Heap)을 이용하여 질병 관리 프로그램을 구현한다. 이 프로그램은 질병 의심 환자 데이터 이름, 체온, 기침 여부, 지역을 받아 Queue에 구축하며, 해당 Queue를 Patient_Queue라 부른다. Queue에서 pop 명령어를 실행하면 BST 구조에 저장된다. BST는 Location_BST, Patient_BST 두 종류로 구성된다. Location_BST는 지역 정보를 담고 있는 BST이고, Patient_BST는 각 Location_BST의 노드마다 하나씩 연결된 BST 이다. Patient_Queue에서 pop된 환자 데이터는 환자의 지역에 해당하는 노드에 속한 Patient_BST에 삽입되며, 이때, 질병 여부를 검증하여 양성 혹은 음성 여부를 ‘+’, ‘-’로 표기하여 저장한다. BST에서 pop 명령어를 실행하면 Location_MaxHeap 이라는 Heap 구조에 저장되며, 각 노드는 지역과 지역에 해당하는 환자 수를 기준으로 정렬된다. 

![image01](https://user-images.githubusercontent.com/50433145/93013979-ebc49180-f5e7-11ea-8803-b6ea05e82f25.png)


## <u>**Notice**</u>
--------------------------


### 1. 프로젝트 문서 및 소스코드 수정사항

#### [2020_DS_Project1_ver1.pdf](https://github.com/DSLDataStorage/DS_Project_1_2020_2/files/5213816/2020_DS_Project1_ver1.pdf)

```
9/14 - ver1 업로드
```


### 2. 자주들어오는 질문 

**Q. command.txt와 data.txt는 제공하지 않나요?**  
A. 네, 윈도우와 리눅스 인코딩 호환 문제로 따로 제공하지 않습니다.  

--------------------------
### Knowledge 
##### 아래 명령어 예시에서 앞의 $ 로 시작되는 부분은 명령어 입력 부분이고, 그 외 는 출력 부분임
##### 리눅스 명령어 요약
1. ls  :  list로 현재 작업중인 디렉토리의 파일 및 포함된 디렉토리 목록들을 표시 ( -a, -l 속성으로 자세한 출력 가능)
2. pwd  :  print working directory로 현재 작업중인 디렉토리의 절대경로 위치 출력
3. cd  : change directory로 디렉토리 를 변경( . : 현재 디렉토리, .. : 상위 디렉토리 ) 
```
$ ls
Documents Download
$ ls -l
drwxr-xr-x 2 user user     4096 Sep 13  2018 Documents
drwxr-xr-x 2 user user     4096 Sep 26  2018 Downloads
$ pwd
/home/user
$ cd Download
$ pwd
/home/user/Downloads
```
### requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ sudo apt-get install git
$ git clone https://github.com/DSLDataStorage/DS_Project_1_2020_2.git
```

### how to compile this project
##### make명령어 실행 후 ls명령어를 통해 해당 디렉토리를 확인해 보면 run 이라는 파일이 생긴것을 확인 할 수 있다. 
```
$ make
g++ -std=c++11 -g -o run LocationBST.cpp Location.h LocationHeap.cpp LocationHeap.h LocationHeapNode.cpp LocationHeapNode.h LocationNode.cpp LocationNode.h main.cpp Manager.cpp Manager.h PatientBST.cpp PatientBST.h PatientBSTNode.cpp PatientBSTNode.h PatientNode.cpp PatientNode.h

$ ls
LocationBST.cpp Location.h LocationHeap.cpp LocationHeap.h LocationHeapNode.cpp LocationHeapNode.h LocationNode.cpp LocationNode.h main.cpp Manager.cpp Manager.h PatientBST.cpp PatientBST.h PatientBSTNode.cpp PatientBSTNode.h PatientNode.cpp PatientNode.h **run**
```
### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt 에 저장된다. 
```
$ ./run
$ cat log.txt
==> command 1) LOAD
Success
```
