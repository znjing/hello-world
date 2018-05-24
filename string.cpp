111111111111
+
{
 int len=a.len+b.len;
 char*rep1=new char[len+1];
 strcpy(rep1,a.rep);
 strcat(rep1,b.rep);
 String str(rep1);
 delete rep1;
 return str;
 
 
}

+=
{
  this->len+=a.len;
  char*rep1=this->rep;
  rep=new char[len+_1];
  strcpy(rep,rep1);
  strcat(rep,a.rep);
  delete rep1;
  return *this;
 
}
