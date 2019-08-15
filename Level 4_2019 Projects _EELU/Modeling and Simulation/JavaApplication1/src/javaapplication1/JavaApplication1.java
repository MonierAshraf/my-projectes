/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author MonierAshraf
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        Scanner s = new Scanner(System.in);
      /*  System.out.println(" Enter Number Of Custmers ");
        int number = s.nextInt();

        System.out.println(" Enter Number Of Arrival Times For Table A ");
        int p1 = s.nextInt();

        System.out.println(" Enter Number Of Service Times For Table B ");
        int p2 = s.nextInt();
        //Size main table
        int[] inter_time = new int[number];
         */
        int number = 6;
        int p1 = 8;
        int p2 = 6;
        int[] inter_time = new int[number];
        System.out.println(" Enter Number Of Start Of Inter Arrival Time ");
        inter_time[0] = s.nextInt();
        double Average_waiting_time = 0.0, Average_service_time = 0.0, Average_time_customer_spends_in_the_system = 0.0, Average_time_between_arrivals = 0.0;

        Random x = new Random();//if Genrate Random Value From Program Java_Mtrhod
        //Main table 
        int[] R1 = new int[number];//if Genrate Random Value From Program Java_Mtrhod
        int[] R2 = new int[number];//if Genrate Random Value From Program Java_Mtrhod

        int[] service_time = new int[number];
        int[] arrival_time = new int[number];
        int[] service_begain = new int[number];
        int[] service_end = new int[number];
        int[] waiting_time = new int[number];
        int[] total_time = new int[number];
        int[] idle_time = new int[number];

        //table a
        int[] arrival_a = new int[p1];
        double[] Probability_a = new double[p1];
        double[] Cumulative_a = new double[p1];
        int[] random_a = new int[p1];

        ///table b
        int[] service_b = new int[p2];
        double[] Probability_b = new double[p2];
        double[] Cumulative_b = new double[p2];
        int[] random_b = new int[p2];
        R1[0] = -1;
        R1[1] = 130;
        R1[2] = 270;
        R1[3] = 380;
        R1[4] = 350;
        R1[5] = 650;

        R2[0] = 5;
        R2[1] = 15;
        R2[2] = 35;
        R2[3] = 65;
        R2[4] = 90;
        R2[5] = 97;
//Random
        /*//Genrate Random Value From Program Java_Mtrhod
        for (int i = 0; i < R1.length; i++) {
            R1[i] = x.nextInt(1000);

        }
        //Genrate Random Value From Program Java_Mtrhod
        for (int i = 0; i < R1.length; i++) {
            R2[i] = x.nextInt(100);

        }
         */
        /*
// Arrials For Table A
        for (int i = 0; i < p1; i++) {
            System.out.println(" Enter Number Of Arrival time table A cell " + i + " ");
            arrival_a[i] = s.nextInt();

        }
//Genrate Probability For Table A
        for (int i = 0; i < p1; i++) {
            System.out.println(" Enter Number Of Probability table A cell " + i + " ");
            Probability_a[i] = s.nextDouble();

        }*/
        arrival_a[0] = 1;
        arrival_a[1] = 2;
        arrival_a[2] = 3;
        arrival_a[3] = 4;
        arrival_a[4] = 5;
        arrival_a[5] = 6;

        Probability_a[0] = 0.125;
        Probability_a[1] = 0.125;
        Probability_a[2] = 0.125;
        Probability_a[3] = 0.125;
        Probability_a[4] = 0.125;
        Probability_a[5] = 0.125;
        Probability_a[6] = 0.125;
        Probability_a[7] = 0.125;

//Cumulative For Table A
        for (int i = 0; i < Cumulative_a.length; i++) {
            if (i == 0) {
                Cumulative_a[0] = Probability_a[0];
                continue;
            } else {
                Cumulative_a[i] = Cumulative_a[i - 1] + Probability_a[i];

            }
        }
//Rendom For Table A
        for (int i = 0; i < random_a.length; i++) {
            random_a[i] = (int) ((Cumulative_a[i] * 1000) - 1);

        }
//Saved Values
         service_b[0] = 1;
        service_b[1] = 2;
        service_b[2] = 3;
        service_b[3] = 4;
        service_b[4] = 5;
        service_b[5] = 6;
        Probability_b[0] = 0.10;
        Probability_b[1] = 0.20;
        Probability_b[2] = 0.30;
        Probability_b[3] = 0.25;
        Probability_b[4] = 0.10;
        Probability_b[5] = 0.05;/*
        //Genrate Service Time For Table B 
        for (int i = 0; i < p2; i++) {
            System.out.println(" Enter Number Of Service time table B cell " + i + " ");
            service_b[i] = s.nextInt();

        }

        //Genrate Probability For Table B
        for (int i = 0; i < p2; i++) {
            System.out.println(" Enter Number Of Probability table b cell " + i + " ");
            Probability_b[i] = s.nextDouble();

        }*/
        //Cumulative For Table B
        for (int i = 0; i < Cumulative_b.length; i++) {
            if (i == 0) {
                Cumulative_b[0] = Probability_b[0];
            } else {
                Cumulative_b[i] = Cumulative_b[i - 1] + Probability_b[i];
            }
        }
        //Rendom For Table B
        for (int i = 0; i < random_b.length; i++) {
            random_b[i] = (int) ((Cumulative_b[i] * 100) - 1);

        }
//inter arrival time 
        double sum_Average_time_between_arrivals = 0.0;
        for (int i = 0; i < inter_time.length; i++) {

            for (int j = 0; j < random_a.length; j++) {

                if (R1[i] >= 0 && R1[i] <= random_a[j]) {
                    inter_time[i] = arrival_a[j];
                    break;
                }
                if (R1[i] >= random_a[j] && R1[i] <= random_a[j + 1]) {
                    inter_time[i] = arrival_a[j];
                    continue;
                }
            }
            sum_Average_time_between_arrivals += inter_time[i];
            Average_time_between_arrivals = sum_Average_time_between_arrivals / (number - 1);
        }

        //Service Time 
        double sum_Average_service_time = 0.0;
        for (int i = 0; i < service_time.length; i++) {

            for (int j = 0; j < random_b.length; j++) {

                if (R2[i] >= 0 && R2[i] <= random_b[j]) {
                    service_time[i] = service_b[j];
                    break;
                }
                if (R2[i] >= random_b[j] && R2[i] <= random_b[j + 1]) {
                    service_time[i] = service_b[j];
                    continue;
                }
            }
            sum_Average_service_time += service_time[i];
            Average_service_time = sum_Average_service_time / number;
        }

        //arrival_time
        for (int i = 0; i < arrival_time.length; i++) {

            for (int j = 0; j < i + 1; j++) {
                arrival_time[i] += inter_time[j];
            }

        }

        //service_begain
        for (int i = 0; i < service_begain.length; i++) {

            if (i == 0) {
                service_begain[i] = arrival_time[i];
                service_end[i] = service_begain[i] + service_time[i];
                continue;
            } else if (arrival_time[i] >= service_end[i - 1]) {
                service_begain[i] = arrival_time[i];
                service_end[i] = service_begain[i] + service_time[i];
            } else {
                service_begain[i] = service_end[i - 1];
                service_end[i] = service_begain[i] + service_time[i];
            }
        }

        //waiting_time
        double sum_Average_waiting_time = 0.0;
        for (int i = 0; i < waiting_time.length; i++) {

            waiting_time[i] = service_begain[i] - arrival_time[i];
            sum_Average_waiting_time += waiting_time[i];
            Average_waiting_time = sum_Average_waiting_time / number;
        }

        //idle_time
        for (int i = 1; i < idle_time.length; i++) {

            idle_time[i] = service_begain[i] - service_end[i - 1];

        }

        //  total_time
        double sum_Average_time_customer_spends_in_the_system = 0.0;
        for (int i = 0; i < total_time.length; i++) {

            total_time[i] = service_end[i] - arrival_time[i];
            sum_Average_time_customer_spends_in_the_system += total_time[i];
            Average_time_customer_spends_in_the_system = sum_Average_time_customer_spends_in_the_system / number;
        }
        System.out.println("-------------------------Final Table -------------------------------");

        System.out.println();
        System.out.println(" Random R1 "+" Random R2 "+" inter arrival_time "+
                " service_time "+" arrival_time "+" service_begain "+" service_end "
       +" Watinig " +" total_time "+" idle_time ");
        for (int i = 0; i < total_time.length; i++) {
            System.out.println(" "+R1[i]  +"            "+inter_time[i]+"            "+R2[i]+"            "+service_time[i]+"            "+arrival_time[i] +"            "
                    +service_begain[i]+"            "+service_end[i]+
            "            "+waiting_time[i]+"            "+idle_time[i]+"               "+total_time[i]);
        }
/*
        System.out.println();
        System.out.println(" inter arrival_time");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(inter_time[i] + " ");
        }

        System.out.println();
        System.out.println(" Random R2 ");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(R2[i] + " ");
        }

        System.out.println();
        System.out.println("service_time");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(service_time[i] + " ");
        }

        System.out.println();
        System.out.println("arrival_time");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(arrival_time[i] + " ");
        }

        System.out.println();
        System.out.println("service_begain");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(service_begain[i] + " ");
        }

        System.out.println();
        System.out.println("service_end");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(service_end[i] + " ");
        }

        System.out.println();
        System.out.println("Watinig");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(waiting_time[i] + " ");
        }

        System.out.println();
        System.out.println("total_time");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(total_time[i] + " ");
        }

        System.out.println();
        System.out.println("idle_time");
        for (int i = 0; i < total_time.length; i++) {
            System.out.print(idle_time[i] + " ");
        }
        
        
        
        
        
        
        
        
        */
        
        
        
        
        
        
        
        
        System.out.println();
        System.out.println("-------------------------Final Result -------------------------------");
        System.out.println();

        System.out.println("Sum_Average_waiting_time = " + sum_Average_waiting_time);
        System.out.println("1- Average_waiting_time = " + Average_waiting_time);
        System.out.println();
        System.out.println("Sum_Average_waiting_time = " + sum_Average_service_time);
        System.out.println("2- Average_waiting_time = " + Average_service_time);
        System.out.println();
        System.out.println("Sum_Average_waiting_time = " + sum_Average_time_customer_spends_in_the_system);
        System.out.println("3- Average_waiting_time = " + Average_time_customer_spends_in_the_system);
        System.out.println();
        System.out.println("Sum_Average_waiting_time = " + sum_Average_time_between_arrivals);
        System.out.println("4- Average_waiting_time = " + Average_time_between_arrivals);

    }

}
