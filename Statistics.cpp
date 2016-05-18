  #include "Time.h";
  #include "Time.cpp";
  #include "Statistics.h";
  
  using namespace std;
   /**
    * Calculate the mean (average) of the data entered.
    *
    * @return the mean of the data pushed into our data set
    */
   T Statistics::mean()
   {
    int counter = 0;
    int seconds = 0;
    std::list<int> ::Iterator it;
    for (it=time_list.begin()+1; it!=time_list.end(); ++it)
    {
      seconds+=*it;
      counter++;
    }
    seconds=seconds/counter;
    return (seconds / 3600 << ":" << setfill('0') << setw(2) << ( seconds % 3600 ) / 60 << setfill('0') << setw(2) << (seconds%60));
   }

   /**
    * Calculate the median (middle element when the data is sorted)
    *
    * @return the mode of the data pushed into our data set
    */
   T Statistics::median()
   {
    int counter=0; 
    std::list<int> ::Iterator it;
    for (it=time_list.begin()+1; it!=time_list.end(); ++it)
    {
      counter++;
    }
    time_list.sort();
    std::list<int> ::Iterator iter;
    if(counter%2==0)
    {
      return *iter;
    }
    else
    {
      return (*iter + *(--iter));
    }
   }

   /**
    * Calculate the mode (most common element). 
    *
    * @return a set of the most common elements.  This can be the empty set if
    * there is a uniform distribution
    */
   std::set<T> Statistics::mode()
   {

   }

   /**
    * Get the value of the smallest element
    *
    * @return the minimum value of the data pushed in 
    */
   T Statistics::min()
   {
    int min=*it;
    std::list<int> ::Iterator it;
    for (it=time_list.begin()+1; it!=time_list.end(); ++it)
    {
      if(*it<min)
        min=*it;
    }
    return (seconds / 3600 << ":" << setfill('0') << setw(2) << ( seconds % 3600 ) / 60 << setfill('0') << setw(2) << (seconds%60));
    }

   /**
    * Get the value of the largest element
    *
    * @return the maximum value of the data pushed in 
    */
   T Statistics::max()
   {
    int max=0;
    std::list<int> ::Iterator it;
    for (it=time_list.begin(); it!=time_list.end(); ++it)
    {
      if(*it>max)
        max=*it;
    }
    return (seconds / 3600 << ":" << setfill('0') << setw(2) << ( seconds % 3600 ) / 60 << setfill('0') << setw(2) << (seconds%60));
    }

   /**
    * Add an element to our data set
    *
    * @param t Element to add to our data
    */
   void Statistics::push( T t )
   {
    time_list.insert(t);
    }

   /**
    * Removes all elements from the data
    */
   void Statistics::clear()
   {
      time_list.clear();
   }
