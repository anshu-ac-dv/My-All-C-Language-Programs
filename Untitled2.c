 #include <stdio.h> 
 #include <stdlib.h> 
 void push(); 
 void pop(); 
 void display(); 
 struct node 
 { 
 int val; 
 struct node *next; 
}; 
struct node *head;  
void main () 
14.{ 
15. int choice=0; 
16. printf("\n*********Stack operations using linked list*********\n"); 
17. printf("\n----------------------------------------------\n"); 
18. while(choice != 4) 
19. { 
20. printf("\n\nChose one from the below options...\n"); 
21. printf("\n1.Push\n2.Pop\n3.Show\n4.Exit"); 
22. printf("\n Enter your choice \n"); 
23. scanf("%d",&choice); 
24. switch(choice) 
25. { 
26. case 1: 
27. { 
28. push(); 
29. break; 
30. } 
31. case 2: 
32. { 
33. pop(); 
34. break; 35. } 
36. case 3: 
37. { 
38. display(); 
39. break; 
40. } 
41. case 4: 
42. { 
43. printf("Exiting...."); 
44. break; 
45. } 
46. default: 
47. { 
48. printf("Please Enter valid choice "); 
49. } 
50. }; 
51.} 
52.} 
53.void push () 
54.{ 
55. int val; 
56. struct node *ptr = (struct node*)malloc(sizeof(struct node)); 
57. if(ptr == NULL) 
58. { 
59. printf("not able to push the element"); 
60. } 
61. else 
62. { 
63. printf("Enter the value"); 
64. scanf("%d",&val); 
65. if(head==NULL) 
66. { 
67. ptr->val = val; 
68. ptr -> next = NULL; 
69. head=ptr; 
70. } 
71. else 72. { 
73. ptr->val = val; 
74. ptr->next = head; 
75. head=ptr; 
76. 
77. } 
78. printf("Item pushed"); 
79. 
80. } 
81.} 
82. 
83.void pop() 
84.{ 
85. int item; 
86. struct node *ptr; 
87. if (head == NULL) 
88. { 
89. printf("Underflow"); 
90. } 
91. else 
92. { 
93. item = head->val; 
94. ptr = head; 
95. head = head->next; 
96. free(ptr); 
97. printf("Item popped"); 
98. 
99. } 
100. } 
101. void display() 
102. { 
103. int i; 
104. struct node *ptr; 
105. ptr=head; 
106. if(ptr == NULL) 
107. { 
108. printf("Stack is empty\n"); 109. } 
110. else 
111. { 
112. printf("Printing Stack elements \n"); 
113. while(ptr!=NULL) 
114. { 
115. printf("%d\n",ptr->val); 
116. ptr = ptr->next; 
117. } 
118. } 
119. }
