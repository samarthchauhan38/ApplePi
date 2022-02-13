#include <iostream>
#include <string>
using namespace std;

class covid19
{
    public:
    void basic_info()
    {
        cout<<"\n";
        cout<<"Coronavirus disease (COVID-19) is an infectious disease caused by the SARS-CoV-2 virus.\n";
        cout<<"Most people infected with the virus will experience mild to moderate respiratory illness and recover without requiring special treatment.\n";
        cout<<"However, some will become seriously ill and require medical attention.\n";
        cout<<"Older people and those with underlying medical conditions like cardiovascular disease, diabetes, chronic respiratory disease, or cancer are more likely to develop serious illness.\n";
        cout<<"Anyone can get sick with COVID-19 and become seriously ill or die at any age. \n";
    }
    void covid19_symp()
    {
        cout<<"\n";
        cout<<"Most common symptoms:";
        cout<<"Fever\nCough\nTiredness\nLoss of taste or smell\n";
        cout<<"\nRemedies:\nZincovit once a day\nLimcee 500 once a day\nDoxycycline 100 mg two times a day\nParacetamol two times a day\nPantocid-dsr once a day\n";
        cout<<"\n";
    }
};

class omicron;

    //delta
class delta:public covid19
{
    public:
    void delta_info()
    {
        cout<<"\n";
        cout<<"1. Delta is more contagious than the other virus strains.\n";
        cout<<"2. Unvaccinated people are at risk.\n";
        cout<<"3. Delta—and Omicron—could lead to 'hyperlocal outbreaks.'\n";
        cout<<"4. There is still more to learn about Delta.\n";
        cout<<"5. Vaccination is the best protection against Delta.\n";
        cout<<"\n";
    }

    void delta_symp()
    {
      cout<<"\n";
      cout<<"Symptoms of delta:";
        cout<<"It seems like cough and loss of smell are less common,” Headache\nSore throat\nRunny nose and fever\n";

    }
    friend void difference(delta,omicron);
};

        //omicron
class omicron:public covid19
{
    public:
    void omicron_info()
    {   cout<<"\n";
        cout<<"Scientists say that Omicron is more contagious, but it doesn't appear to transmit in ways that are different from earlier versions of the virus.\n";
        cout<<"That means the same precaution rules apply but become more important, even if you are vaccinated or have been infected before.\n";
        cout<<"\n";
    }
    void omicron_symp()
    {
        cout<<"\n";
        cout<<"Omicron symptoms:\n";
        cout<<"Scratchy throat\nNight sweats\nExtreme Fatigue and muscle aches\n";
        cout<<"\n";
    }
};

    //friend function
void difference(delta,omicron)
{
    delta k;
    k.delta_symp();
    omicron o;
    o.omicron_symp();
}
/////////////

class fever
{
    public:
    void display()

    {
      //Remedies for fever
      cout<<"\n";
      cout<<"DRINK FLUIDS like\n1) Juice\n2) Sports drinks\n3) Decaffeinated tea\n";
      cout<<"Get plenty of rest\n";
      cout<<"Common OTC fever reducers include:";
      cout<<"Acetaminophen (Tylenol, Children’s Tylenol)\n";
      cout<<"Ibuprofen (Advil, Children’s Advil, Motrin)\n";
      cout<<"Aspirin\n";
    }
};

//class for common cold
class cold
{
  public:
  void display()
  {
    //Remedy for common cold
    cout<<"\n";
    cout<<"Sip warm liquids.";
    cout<<"Try honey.\nHoney may help coughs in adults and children who are older than age 1. Try it in hot tea.\n";
    cout<<"Add moisture to the air.\n";
    cout<<"A cool-mist vaporizer or humidifier can add moisture to your home, which might help loosen congestion. \n";
  }
};
        //high blood pressure

class blood_pressure
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"1. Increase activity and exercise more\n2. Lose weight if you’re overweight\n";
    cout<<"3. Cut back on sugar and refined carbohydrates\n4. Eat more potassium and less sodium\n";
    cout<<"5. Eat less processed food\n";
  }
};
      //diabetes

class diabetes
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"Foods to control diabetes and lower blood sugar.";
    cout<<"1) Non-Starchy Vegetables like \n Avocados\nBroccoli\nCabbage\nCauliflower\nCucumbers\n";
    cout<<"2) Fatty Fish\n";
    cout<<"3) Nuts and Eggs\n";
    cout<<"4) Apple Cider Vinegar\n";
    cout<<"5) Cinnamon and Turmeric\n";
  }
};
      //Sore Throat

class sore_throat
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"1) Salt water\nGargling with warm salt water can help soothe a sore throat and break down secretions.\n";
    cout<<"2) Chamomile tea\nChamomile tea is naturally soothing. It has long been used for medicinal purposes, like soothing a sore throat.\n";
    cout<<"3) Peppermint\nPeppermint is known for its ability to freshen breath. Diluted peppermint oil sprays may also relieve sore throats.\n";
  }
};
      //Depression

class depression
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"Excercise regularly and do meditation"<<endl;
    cout<<"Read books and novels"<<endl;
    cout<<"Eating healthy food"<<endl;
    cout<<"Develop some interesting hobbies like music,guitar playing,drawing,etc."<<endl;
  }
};
      //time management

class time_management
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"Do things by prioritizing them.\nThis habit of streamlining things will save your time and you will not be in a situation of last minute work all the time."<<endl;

  }
};
      //Exam pressure

class exam_pressure
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"Make a revision timetable according to the priority of the topic and length of the syllabus.\nOrganize your study material like books, notes, laptop etc. before you begin to study or revision "<<endl;
  }
};
      //Financial issues

class financial_issues
{
  public:
  void display()
  {
    cout<<"\n";
    cout<<"Students run into this issue throughout their college career.Try to start freelancing.Develop skills which will bring you good income."<<endl;
  }
};
      //lack_of_confidence

class lack_of_confidence
{
  public:
  void display()
  {
    cout<<"\n";
   cout<<"Try to talk and open up yourself for conversations, group discussions, speeches, lectures, parties, games.\n";
   cout<<"This will help you further in your life to socialize with people in professional and personal life."<<endl;
  }
};

int main()
{
  string issue;
  string input ="i have fever";
  string input1 = "i have cold";
  string input2 = "i have high blood pressure";
  string input3 = "i have diabetes";
  string input4 = "i have sore throat";
  string input5 = "i think i have depression";
  string input6 = "i cant manage my time";
  string input7 = "i cant handle exam pressure";
  string input8 = "how can i make my self financially better?";
  string input9 = "how to overcome lack of confidence";
  string input10 ="what are the covid 19 symptoms?";
  string input11 = "what are the symptoms of omicron?";
  string input12 = "difference between delta and omicron symptoms";
  string input13 ="what is covid 19?";

  cout<<"What is the issue?"<<endl;
  getline(cin,issue);

if(!issue.compare(input13))
{
  covid19 q;
  q.basic_info();

  string answer;
  cout<<"\nWant to know about Delta varient?\n";
  cin>>answer;

  if(answer == "yes")
  {
    delta w;
    w.delta_info();
    w.delta_symp();

    cout<<"Want to know about Omicron?\n";
    cin>>answer;

    if(answer == "yes")
    {
      omicron e;
      e.omicron_info();
      e.omicron_symp();

      cout<<"\nAll types of symptoms:\n";
      delta a;
      a.covid19_symp();
      a.delta_symp();
      omicron b;
      b.omicron_symp();
    }
    else
    return 0;
}
else
return 0;
}


if(!issue.compare(input))
{
  fever a;
  a.display();
}

      //input1
else if(!issue.compare(input1))
{
  cold b;
  b.display();
}

    //input2
else if(!issue.compare(input2))
{
  blood_pressure c;
  c.display();
}

    //input3
else if(!issue.compare(input3))
{
  diabetes d;
  d.display();
}

    //input4
else if(!issue.compare(input4))
{
  sore_throat e;
  e.display();
}

    //input5
else if(!issue.compare(input5))
{
  depression f;
  f.display();
}

    //input6
else if(!issue.compare(input6))
{
  time_management g;
  g.display();
}

    //input7
else if(!issue.compare(input7))
{
  exam_pressure h;
  h.display();
}

    //input8
else if(!issue.compare(input8))
{
  financial_issues i;
  i.display();
}

    //input9
else if(!issue.compare(input9))
{
  lack_of_confidence j;
  j.display();
}
    //
else if(!issue.compare(input10))
{
  covid19 k;
  k.covid19_symp();
}

else if(!issue.compare(input11))
{
  omicron o;
  o.omicron_symp();
}
else if(!issue.compare(input12))
{
  delta k;
  omicron o;
  difference(k,o);
}

return 0 ;
}