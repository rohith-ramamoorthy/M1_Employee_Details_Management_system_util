

# High Level Requirements:
| ID | Description | Category |
 |----| ------------------ | ------------------ |
 | HR01 | Visual Studio code Platform| Software |
 | HR02 | windows or linux OS | Software |
 | HR03 | Hard disk  | Hardware |


# LOW Level Requirements:
| ID | Description |
 |----| ------------------ |
 | LR01 | Add Details |
 | LR02 | List Details |
 | LR03 | Modify Details |
 | LR04 | Delete Details |
 | LR05 | Exit |
 
 
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


