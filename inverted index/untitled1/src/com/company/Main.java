package com.company;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        // write your code here

        File f1 = new File("C:\\Users\\MonierAshraf\\Desktop\\untitled1\\src\\com\\company/d1.txt");
        Scanner s1 = new Scanner(f1);
        File f2 = new File("C:\\Users\\MonierAshraf\\Desktop\\untitled1\\src\\com\\company/d2.txt");
        Scanner s2 = new Scanner(f2);
        File f3 = new File("C:\\Users\\MonierAshraf\\Desktop\\untitled1\\src\\com\\company/d3.txt");
        Scanner s3 = new Scanner(f3);



        ArrayList<String> words = new ArrayList<String>();
        ArrayList<String> doc1 = new ArrayList<String>();
        ArrayList<String> doc2 = new ArrayList<String>();
        ArrayList<String> doc3 = new ArrayList<String>();


        int w1 = 0, w2 = 0, w3 = 0;

        while (s1.hasNext() || s2.hasNext() || s3.hasNext()) {

            String l1 = s1.nextLine();
            String l2 = s2.nextLine();
            String l3 = s3.nextLine();

            w1 = l1.split(" ").length;
            w2 = l2.split(" ").length;
            w3 = l3.split(" ").length;

            for (String ls1 : l1.split(" ")) {

                words.add(ls1);
                doc1.add(ls1);
            }
            for (String ls2 : l2.split(" ")) {
                words.add(ls2);
                doc2.add(ls2);
            }
            for (String ls3 : l3.split(" ")) {
                words.add(ls3);
                doc3.add(ls3);
            }

        }

//  NotRepeet_Words//
        int c = 0;

        for (int ii = 0; ii < words.size(); ii++) {

            for (int i = c + 1; i < words.size(); i++) {

                if (words.get(c).equals(words.get(i)))

                {
                    words.remove(i);

                }
            }

            c++;
        }


        int[][] value = new int[words.size()][3];

        for (int ir = 0; ir < words.size(); ir++) {
            for (int j = 0; j < 3; j++) {
                value[ir][j] = 0;
            }

        }

//  incidence matrix d1 //
        int v = 0;


        for (int t1 = 0; t1 < words.size(); t1++) {

            for (int r = 0; r < doc1.size(); r++) {

                if (words.get(v).equals(doc1.get(r)))

                {
                    value[v][0] = 1;

                }


            }
            v++;
        }

//  incidence matrix d2 //
        int v2 = 0;


        for (int t2 = 0; t2 < words.size(); t2++) {

            for (int r2 = 0; r2 < doc2.size(); r2++) {

                if (words.get(v2).equals(doc2.get(r2)))

                {
                    value[v2][1] = 1;

                }


            }
            v2++;
        }


//  incidence matrix d3 //
        int v3 = 0;


        for (int t3 = 0; t3 < words.size(); t3++) {

            for (int r3 = 0; r3 < doc3.size(); r3++) {

                if (words.get(v3).equals(doc3.get(r3)))

                {
                    value[v3][2] = 1;

                }


            }
            v3++;
        }








                //output //

        System.out.println("Words "+"D1 D2 D3") ;
        for(int ir = 0; ir<words.size(); ir++)
        {
            System.out.print(words.get(ir)+"    ") ;

        for(int j = 0; j<3; j++)
            {
                System.out.print(value[ir][j]);
            }
            System.out.println();
        }





//input form user //
        ArrayList<String> input = new ArrayList<String>();
               Scanner in=new Scanner(System.in);
        System.out.print("Enter Your Ask = ");
             String p=in.nextLine();

        for (String q : p.split(" ")) {

            input.add(q);
        }
        //start to show out put //


        for (int w=0 ;w<input.size();w++) {

            if (input.get(w).equals("And") || input.get(w).equals("and")||input.get(w).equals("AND")) {
                int[][] m = new int[2][3];
                for (int q = 0; q < words.size(); q++) {
                    if (input.get(w - 1).equals(words.get(q))) {

                        //   value[q][0,1,2]
                        for (int p4 = 0; p4 < 3; p4++) {
                            m[0][p4] = value[q][p4];
                        }

                    }
                    if (input.get(w + 1).equals(words.get(q))) {

                        //   value[q][0,1,2]

                        for (int p3 = 0; p3 < 3; p3++) {
                            m[1][p3] = value[q][p3];
                        }
                    }
                }

                int[][] result = new int[1][3];
                for (int y1 = 0; y1 < m.length; y1++) {
                    result[0][0] = m[0][0] & m[1][0];
                    result[0][1] = m[0][1] & m[1][1];
                    result[0][2] = m[0][2] & m[1][2];


                }



                System.out.println("Result of And =" + result[0][0] + " " + result[0][1] + " " + result[0][2] + " ");


            }

            if (input.get(w).equals("Or") || input.get(w).equals("or")||input.get(w).equals("OR")) {
                int[][] m = new int[2][3];
                for (int q = 0; q < words.size(); q++) {
                    if (input.get(w - 1).equals(words.get(q))) {

                        //   value[q][0,1,2]
                        for (int p4 = 0; p4 < 3; p4++) {
                            m[0][p4] = value[q][p4];
                        }

                    }
                    if (input.get(w + 1).equals(words.get(q))) {

                        //   value[q][0,1,2]

                        for (int p3 = 0; p3 < 3; p3++) {
                            m[1][p3] = value[q][p3];
                        }
                    }
                }

                int[][] result = new int[1][3];
                for (int y1 = 0; y1 < m.length; y1++) {
                    result[0][0] = m[0][0] | m[1][0];
                    result[0][1] = m[0][1] | m[1][1];
                    result[0][2] = m[0][2] | m[1][2];


                }

                System.out.println("Result of OR   =" + result[0][0] + " " + result[0][1] + " " + result[0][2] + " ");
            }

            if (input.get(w).equals("Xor") || input.get(w).equals("xor")||input.get(w).equals("XOR")) {
                int[][] m = new int[2][3];
                for (int q = 0; q < words.size(); q++) {
                    if (input.get(w - 1).equals(words.get(q))) {

                        //   value[q][0,1,2]
                        for (int p4 = 0; p4 < 3; p4++) {
                            m[0][p4] = value[q][p4];
                        }

                    }
                    if (input.get(w + 1).equals(words.get(q))) {

                        //   value[q][0,1,2]

                        for (int p3 = 0; p3 < 3; p3++) {
                            m[1][p3] = value[q][p3];
                        }
                    }
                }

                int[][] result = new int[1][3];
                for (int y1 = 0; y1 < m.length; y1++) {
                    result[0][0] = m[0][0] ^ m[1][0];
                    result[0][1] = m[0][1] ^ m[1][1];
                    result[0][2] = m[0][2] ^ m[1][2];


                }

                System.out.println("Result of XOR   =" + result[0][0] + " " + result[0][1] + " " + result[0][2] + " ");
            }


}
        System.out.println("Words  in   your Task is  = " + input);
        System.out.println("Words  in   My Dictionary is = " + words);
        System.out.println("Size   of   Dictionary =" + words.size());
        System.out.println("Number of Words for Doc1 =" + w1);
        System.out.println("Number of Words for Doc2 =" + w2);
        System.out.println("Number of Words for Doc2 =" + w3);
        System.out.println("Number of Words are Repeeted  =" + ((w1 + w2 + w3) - words.size()));}
}
