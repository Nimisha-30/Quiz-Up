        #include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<ctype.h>
	#include<time.h>
        
	void show_record()
	{	system("cls");
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%f",&scr);
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf("\n\t\t\tThe Highest Score is %0.2f",scr);
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	fclose(f);
	getch();}

	void edit_score(float score)
	{	system("cls");
	float sc;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%f",&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%.2f",sc);
	    fclose(f);}}

	void help()
	{	system("cls");
	printf("\n\n\t\t\t\t\t\t\tHELP");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\n\t\t\t\t\t\t\tQUIZ UP\n");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t<>The game will consist of 30 questions with 4 options given.\n");
	printf("\t\t\t<>An answer is given by typing the letter corresponding to the chosen option.\n");
	printf("\t\t\t<>For each right answer chosen, you win an amount of $100.\n");
	printf("\t\t\t<>For each wrong answer chosen, you lose an amount of $50.\n");
	printf("\t\t\t<>There will be 6 sections as follows:\n");
	printf("\t\t\t\t1. General Knowledge\n\t\t\t\t2. English\n\t\t\t\t3. Science\n\t\t\t\t4. Mathematics\n");
	printf("\t\t\t<>Each section will have 5 questions each.\n");
	printf("\t\t\t<>The questions will be chosen randomly by the computer from a given question bank.\n");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t\t\t(-: ALL THE BEST :-)\n");}

	int main()
	{	char choice, choice2,x;
	int count, countw, i, n;
	float score;
	mainhome:
  	printf("HI");
    	printf("\n\n\t\t\t\tQUIZ UP\n");
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\n\t\t\tSPEND YOUR KNOWLEDGE") ;
	printf("\n\t\t\tEARN YOUR MONEY") ;
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t> Press S to START playing");
	printf("\n\t\t\t> Press V to VIEW HIGH SCORE");
	printf("\n\t\t\t> press H for HELP");
	printf("\n\t\t\t> press Q to QUIT");
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	scanf("%c",&choice);
	choice=toupper(choice);
	if (choice=='V')
	{	show_record();
	 	getch();
		goto mainhome;}
	if (choice=='H')
	{	help();
		getch();
		goto mainhome;}
	if (choice=='Q')
		exit(1);
	if (choice=='S')
	{	system("cls");
    	printf("\n\t\t\t\t\tWelcome to QUIZ UP!");
	printf("\n\n\t\t\t\tHere are the rules of the game:");
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t<>The game will consist of 30 questions with 4 options given.\n");
	printf("\t\t<>An answer is given by typing the letter corresponding to the chosen option.\n");
	printf("\t\t<>For each right answer chosen, you win an amount of $100.\n");
	printf("\t\t<>For each wrong answer chosen, you lose an amount of $50.\n");
	printf("\t\t<>There will be 6 sections as follows:\n");
	printf("\t\t\t1. General Knowledge\n\t\t\t2. English\n\t\t\t3. Science\n\t\t\t4. Mathematics");
	printf("\n\t\t<>Each section will have 5 questions each.\n");
	printf("\t\t<>The questions will be chosen randomly by the computer from a given question bank.\n");
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t\t\t\t(-: ALL THE BEST :-)\n");
	printf("\n\n\tPress Z to start the game!\n");
	printf("\n\tPress any other key to return to the main menu\n");
	fflush(stdin);
	if (toupper(getch())!='Z')
	{	goto mainhome;}
	else
	{	system("cls");  
	count = 0;
	printf("General Knowledge");
	srand(time(0));
	for(i=0;i<5;i++)
	{	n=rand()%10-1+7%2;
        if(n==0){printf("\nQuestion - What is the name of the group of animals which are active during twilight?\na) Diurnal\nb) Crepuscular\nc) Matutinal\nd) Vespertine\n");
	        scanf("%c",&x);
       		x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is b)Crepuscular.");getc(stdin);};}
        if(n==1){printf("\nQuestion - This nut can be sweet or bitter and its oil is used in cosmetics, aromatherapy and in making marzipan. USA is the top producer of it.\na) Pine nut\nb) Groundnut\nc) Cashew nut\nd) Almond\n");
	        scanf("%c",&x);
       		x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is d)Almond.");getc(stdin);};}
        if(n==2){printf("\nQuestion - These crustaceans or animals with hard shells are called decapods, which means they have 10 legs. The one pair of legs have enlarged pincers which help them grasp and tear their food. Which of the following is a decapod?\na) Grasshopper\nb) Lobster\nc) Spider\nd) Octopus\n");
		scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is b)Lobster.");getc(stdin);};}
        if(n==3){printf("\nQuestion - Which of the following statements is incorrect?\na) Photochemical smog always contains ozone\nb) Forests are called green lungs because they maintain the balance between oxygen and carbon dioxide in the atmosphere.\nc) Lead is the most hazardous metal pollutant of automobile dust.\nd) None of these\n");	
		scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is d)None of these.");getc(stdin);};}
        if(n==4){printf("\nQuestion - Which of the following movements is taking place in Odisha where fertile land is being taken for missile testing?\na) Baliapal movement\nb) Chipko movement\nc) Bishnoi movement\nd) Appiko movement\n");
		scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a)Baliapal movement.");getc(stdin);};}
        if(n==5){printf("\nQuestion - The Antarctic treaty states that \na) The continent should be used for scientific research only.\nb) The continent be used for tourist purpose only.\nc) No person can live on Antarctica.\nd) Only wild tribes are free to live on the continent.\n");
		scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a)the continent should be used for scientific research only.");getc(stdin);};}
        if(n==6){printf("\nQuestion - A piece of an apple turns brown when exposed to the atmosphere, which kind of change is it?\na) Physical\nb) Chemical\nc) Both a) and b)\nd) None of the above.\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is b)chemical.");getc(stdin);};}
        if(n==7){printf("\nQuestion - Trachoma disease affects _______.\na) Eyes\nb) Liver\nc) Lungs\nd) Stomach\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a)Eyes.");getc(stdin);};}
        if(n==8){printf("\nQuestion - Who proposed the law of electrolysis?\na) Michael Faraday\nb) Isaac newton\nc) Albert Einstein\nd) James Clerk Maxwell\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a)Michael Faraday.");getc(stdin);};}
        if(n==9){printf("\nQuestion - Which of the following is the largest natural satellite in our solar system?\na) Triton\nb) Callisto\nc) Ganymede\nd) Titania\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is c)Ganymede.");getc(stdin);};}
	}
	system("cls");
	printf("English");
	srand(time(0));
	for(i=0;i<5;i++)
	{	n=rand()%10-1+7%2;
        if(n==0){printf("\nQuestion - There is something that we all can do _______ all the difficulties.\na) have\nb) within\nc) because\nd) despite\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is d) despite.");getc(stdin);};}
        if(n==1){printf("\nQuestion - _________ a lot of work to do, so will need a break.\na) I’ll have \nb)I’d had\nc) I’m being had\nd) I’ m having to.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a) I’ll have.");getc(stdin);};}
        if(n==2){printf("\nQuestion - Find the synonym of 'Subdue'\na) Evoke\nb) Rewind\nc) Conquer\nd) Bemoan\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is c) Conquer.");getc(stdin);};}
        if(n==3){printf("\nQuestion - Jaya: How was the function yesterday?\nRati:________\na) That is a strange question\nb) Great! We had a ball dance.\nc) You shouldn’t worry about it\nd) Take it 			easy\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is b)Great! We had a ball dance.");getc (stdin);};}
        if(n==4){printf("\nQuestion - Choose the word with the right spelling.\na) Gelvanies\nb) Galvenize\nc) Galvanise\nd) Galivanise\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is c) Galvanise.");getc(stdin);};}
        if(n==5){printf("\nQuestion - Shilpa: Hi Kasim! How have you been? Kasim: _________\na)Thank you.\nb)How do you do?\nc)Oh yeah! Hello.\nd) Hi! I’ve been good. How about you?\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is d) Hi! I’ve been good. How about you?");getc(stdin);};}
        if(n==6){printf("\nQuestion - Convert the following sentence to passive voice from active voice.\nThe doctor said to the patient, “Take this medicine twice daily”.\na)The doctor advised 		the patient to take that medicine twice daily.\nb)The doctor wished the patient took this 			medicine twice daily.\nc)The doctor told the patient to taken this medicine twice daily.\nd)The 		doctor told the patient take this medicine twice daily.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is d) The doctor told the patient take this medicine twice daily.");getc(stdin);};}
        if(n==7){printf("\nQuestion - Choose the word with the right spelling\na)Scrupulous	\nb)Scrupulous\nc)Scrupalous\nd)Scruapalous\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is a)Scrupulous.");getc(stdin);};}
        if(n==8){printf("\nQuestion - You look worried, Sameer. What _________ you?\na)was troubled	\nb)is troubling \nc)trouble\nd)will trouble\n");
		scanf("%c",&x);
        	x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is b)is troubling.");getc(stdin);};}
        if(n==9){printf("\nQuestion - The room looks very clean. Diya _______ it.\na)clean\nb) cleaning	\nc) has cleaned \nd) will clean\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is c) has cleaned.");getc(stdin);};}
	}
	system("cls");
	printf("Science");
	srand(time(0));
        for(i=0;i<5;i++)
        {        n=rand()%10-1+7%2;
        if(n==0){printf("\nQuestion - Which of the following is not the correct difference between weaving and knitting?\n(a)  Weaving is done by machine while knitting is done by hands only.\n(b)  Weaving uses one yarn while knitting uses two sets of yarn.\n(c)  Weaving is done for silk only while knitting is done for wool only.\n(d)  All of these.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (d)	 All of these.");getc(stdin);};}
        if(n==1){printf("\nQuestion - Which of the following sets of rocks contain an odd member?\n(a)  Sandstone, Shale, Conglomerate\n(b)  Slate, Marble, Limestone\n(c)  Shale, Limestone, Sandstone\n(d)  Quartzite, Gneiss, Slate\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (b)	 Slate, Marble, Limestone.");getc(stdin);};}
        if(n==2){printf("\nQuestion - Read the given statements and select the correct one.\n(a)  There are total 10 pairs of ribs in human body.\n(b)  First seven pairs of ribs are called true ribs.\n(c)  Ribs are attached to backbone in the front and to sternum at the back.\n(d)  Ribs protect the brain and the heart.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (b)	 First seven pairs of ribs are called true ribs.");getc(stdin);};}
        if(n==3){printf("\nQuestion - Which of the following is a correct match?\n(a)  Waste from farmyards and food courts – Non-biodegradable waste\n(b)  Pesticides, pharmaceuticals and heavymetal sludge – Biodegradable waste\n(c)  Peels of fruits and vegetables, tea leaves – Organic waste\n(d)  Mineral wastes from mining and rubber waste – Kitchen waste\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	 Peels of fruits and vegetables, tea leaves – Organic waste.");getc(stdin);};}
        if(n==4){printf("\nQuestion - Manisha took some vinegar in a test tube and added some baking soda to it.  Then she lit a matchstick and brought it near the mouth of the test tube.  The flame of matchstick got extinguished.  Which of the following is correct conclusion regarding the given experiment?\n(a)  Carbon dioxide gas does not support burning.\n(b)  Air contains carbon dioxide.\n(c)  Oxygen gas present in the air is necessary for burning.\n(d)  Oxygen gas extinguish fire.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (a)	 Carbon dioxide gas does not support burning.");getc(stdin);};}
        if(n==5){printf("\nQuestion - In circular motion, the\n(a)  Direction of motion is fixed.\n(b)  Direction of motion changes continuously.\n(c)  At every point distance and displacement of the object moving is same.\n(d)  Velocity is constant.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (b)	 Direction of motion changes continuously.");getc(stdin);};}
        if(n==6){printf("\nQuestion - What causes a moving body to resist a change in its state of motion?\n(a)	 Its mass\n(b)	Its speed\n(c)	Its inertia\n(d)  Its weight\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	 Its inertia.");getc(stdin);};}
    	if(n==7){printf("\nQuestion - Nisha placed a stick vertically in the playground at 8:15 am in the morning.  How will the shadow of the stick at 12:00 noon be in comparison to the one at 8:15 	am?\n(a)  It will be shorter than one at 8:15 am.\n(b)  It will be same as one at 8:15 am.\n(c)	 It will be greater than one at 8:15 am.\n(d)  Shadow will not form at 12:00 noon.\n");
		scanf("%c",&x);
       		x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (a)	 It will be shorter than one at 8:15 am.");getc(stdin);};}
        if(n==8){printf("\nQuestion - Mark the incorrect statement:\n(a)  Melting of wax is a physical change while burning of wax in a candle is a chemical change.\n(b)  Metals expand on heating while contract on cooling.  Both are physical changes.\n(c)	 Composition of matter 	changes during a chemical change while it remains same during a physical change.\n(d)  High and low tides in sea are the examples of non-periodic changes while growth of a tree is a periodic change.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (d)	 High and low tides in sea are the examples of non-periodic changes while growth of a tree is a periodic change.");getc			(stdin);};}
        if(n==9){printf("\nQuestion - Nitu mixed some iron filings with sulphur powder in a China dish. She heated the contents of China dish.  What did she observe during the experiment?\n(a)  There was no difference in the contents of China dish before and after heating.\n(b)	 Before heating, iron filings and sulphur powder could be seen separately but after heating the contents became black.\n(c)  Before heating, the iron filings and sulphur powder could not be seen separately.\n(d)  Before heating, the contents were black and after heating, iron filings and sulphur could be seen separately.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (b)	 Before heating, iron filings and sulphur powder could be seen separately but after heating the contents became 				black.");getc(stdin);};}
	}
	system("cls");
	printf("Mathematics");
	srand(time(0));
        for(i=0;i<5;i++)
        {        n=rand()%10-1+7%2;
        if(n==0){printf("\nQuestion - Which of the following options is incorrect?\n(a)	Roman numeral for the largest 3-digit number is CMxCIx.\n(b)  The smallest 4-digit number formed by using the digits 5, 6, 0, 9 (using each digit only once) is 5069.\n(c)  Estimated product of 5034 and 295 is 1500000.\n(d)  Place value and face value are always equal at tens place.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (d)	Place value and face value are always equal at tens place.");getc(stdin);};}
        if(n==1){printf("\nQuestion - Study the given statements carefully and select the correct option:\nStatement 1: 7456824 is divisible by 9.\nStatement 2: A natural number is divisible by 9, if the sum of the digits of the number is divisible by 3.\n(a)  Both Statement 1 and Statement 2 are true.\n(b)  Both Statement 1 and Statement 2 are false.\n(c)  Statement 1 is true but Statement 2 is false.\n(d)  Statement 1 is false but Statement 2 is true.\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	Statement 1 is true but Statement 2 is false.");getc(stdin);};}
        if(n==2){printf("\nQuestion - Arjun weighs twice as Surbhi and Sejal weighs 5kg less than Arjun.  If the total weight of Arjun, Surbhi and SEjal is 63kg, then find the total weight of Sejal and Arjun.\n(a)  54.2 kg\n(b)  47 kg\n(c)  49.4 kg\n(d)  62.4 kg\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	49.4 kg.");getc(stdin);};}
        if(n==3){printf("\nQuestion - Divide ₹3010 among A, B, C respectively in such a way that A gets double of what B gets and B gets double of what C gets.\n(a)  ₹ 1720, ₹ 860, ₹ 430\n(b)  ₹ 1640, ₹ 920, ₹ 450\n(c)  ₹ 1690, ₹ 825, ₹ 495\n(d)  ₹ 1800, ₹ 400, ₹ 810\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (a)	₹ 1720, ₹ 860, ₹ 430.");getc (stdin);};}
        if(n==4){printf("\nQuestion - If a : b = c : d, then (ma + nc) : (mb + nd) is equal to ______.\n(a)  m : n\n(b)	 na : mb\n(c)  a : b\n(d)  md : nc\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	a : b");getc(stdin);};}
        if(n==5){printf("\nQuestion - The number of paving stones each measuring 10 dm by 9 dm required to pave a rectangular veranda 60 m by 6 m is ______.\n(a)  360\n(b)  400\n(c)  350\n(d)  300\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='b'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (b)	 400.");getc(stdin);};}
        if(n==6){printf("\nQuestion - If side of a square is doubled, then the new perimeter is ___________ times the original perimeter.\n(a)  Two \n(b)  One- fourth\n(c)  Nine\n(d)  Four\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='a'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (a)	 Two.");getc(stdin);};}
    	if(n==7){printf("\nQuestion - Which of the following ratios is not equal to 3 : 8 in its simplest form?\n(a)  207 : 552\n(b)  261 : 696\n(c)  141 : 392\n(d)  153 : 408\n");
        
	scanf("%c",&x);
       x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	 141 : 392");getc(stdin);};}
        if(n==8){printf("\nQuestion - Which of the following operations satisfies the commutative law for whole numbers?\n(a)  Subtractions and Division\n(b)  Subtraction and 	Multiplication\n(c)  Division and Multiplication\n(d)  Addition and Multiplication\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='d'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (d)	 Addition and Multiplication.");getc (stdin);};}
        if(n==9){printf("\nQuestion - Select the incorrect option:\n(a)	 CLxV – 165\n(b)  MCxLIx – 1149\n(c)  CMLxxIV – 964\n(d)  MCCLVIII – 1258\n");
	        scanf("%c",&x);
	        x=tolower(x);
                if (x=='c'){printf("\n\nCorrect!!!");count++;getc(stdin);}
                else{printf("\n\nWrong!!! The correct answer is (c)	 CMLxxIV – 964.");getc (stdin);};}
	}
	}
	}
	system("cls");
	countw = 20 - count;
	score=(float)count*1000.00-(float)countw*500.00;
	if(score>0)
	{	printf("\n\n\t\t\t**************** CONGRATULATION ****************");
	printf("\n\t\t\tYou won ₹%.2f",score);
	}
	else
	{	printf("\n\n\t\t\t**************** SORRY ****************");
	printf("\n\t\t\tYou lost ₹%.2f",score);
	}
	return 0;
	}
