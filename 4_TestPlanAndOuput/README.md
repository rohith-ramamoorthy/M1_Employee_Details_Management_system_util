## TEST PLAN

| TEST ID  |  TEST CASE OBJECTIVE  | INPUT DATA        | EXPECTED OUTPUT  | ACTUAL OUTPUT  | STATUS |
|----------|-----------------------|-------------------|------------------|----------------|--------|
|   TC_01  |   for entering name   | enter name: abc   |   abc            |   abc          |  PASS  |        |
|   TC_02  |   for entering name   | enter name: abc   |   abc            |       -        |  FAIL  |     
|   TC_03  |   for entering age    | enter age: 12     |   12             |   12           |  PASS  |     
|   TC_04  |   for entering age    | enter age: 12     |   12             |       -        |  FAIL  |     
|   TC_05  |   for entering salary | enter salary: 5000|   5000           |   5000         |  PASS  |     
|   TC_06  |   for entering salary | enter salary: 5000|   5000           |      -         |  FAIL  |     
|   TC_07  |   for listing record  | abc 12 5000       |  abc 12 5000     |  abc 12 5000   |  PASS  |     
|   TC_08  |   for listing record  | abc 12 5000       |  abc 12 5000     |  abc 12 5000   |  PASS  |  
|   TC_09  |   for listing record  | abc 12 5000       |  abc 12 5000     |  12 abc 5000   |  PASS  |  
|   TC_10  |   for deleting record | abc               |  abc             |  abc           |  PASS  |  
|   TC_11  |   for deleting record | abc               |  abc             |  abc           |  PASS  | 

## OUTPUT
![](6_ImageAndVideos/output%201.png)
