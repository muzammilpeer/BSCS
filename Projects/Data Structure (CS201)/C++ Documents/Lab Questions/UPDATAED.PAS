Program Stacknewtechnique;

Uses Crt;

type

node=^patient;
patient=record
id:integer;
name:string;
next:node;
end;

Var
Head,Tail,p:node;

Procedure Inp;
var
bases:node;
decision:char;
count:integer;
Begin
count:=0;
Writeln('Do You Want to Add the Data');
Readln(decision);
decision:=upcase(decision);
Repeat
If decision='Y' then    Begin
count:=count+1;
bases:=tail;
New(tail);
with tail^ do begin
Writeln('Enter the ID');
Readln(id);
Writeln('Enter the Name');
Readln(name);
end;
if count=1 then
tail^.next:=nil;
if count > 1 then
tail^.next:=bases;
end;
Writeln('Do Want to Add the Data');
Readln(decision);
decision:=upcase(decision);
if decision='N' then
p:=tail;
until decision='N';
end;

Procedure Out;
Begin
Repeat
with tail^ do begin
Writeln('ID     ',id);
Writeln('Name   ',name);
end;
tail:=tail^.next;
Until tail=nil;
end;


Procedure step2;
var
temp1,temp2:node;
tailtemp:node;
begin
tailtemp:=tail;
new(tail);
With tail^ do begin
Writeln('Enter ID');
Readln(id);
Writeln('Enter the Name');
Readln(name);
end;
tail^.next:=tailtemp;
p:=tail;
new(temp1);new(temp2);
{temp1:=tail;
temp2:=tail^.next;
{new(temp1);new(temp2);     }
temp1^:=tail^;
temp2^:=tail^.next^;
tail^:=temp2^;
tail^.next^:=temp1^;{
p^.next:=temp^.next;
p^.next^:=p^;
p^:=temp^;  }
end;

Procedure step3;
begin
new(Head);
With Head^ do begin
Writeln('Enter ID');
Readln(id);
Writeln('Enter the Name');
Readln(name);
end;
Head^.next:=p;
end;

Procedure step5{search};
var
findid,count:integer;
begin
count:=0;
Writeln('Enter ID to Search');
Readln(findid);
Repeat
if  findid=head^.id then begin
Writeln('ID         ',head^.id);
Writeln('Name       ',head^.name);
Writeln;  count:=count+1;
end;
head:=head^.next;
until  head=nil;
if count>0 then
Writeln('The Search Found ',count,' Results')
else Writeln('Not Found!!')
end;

Procedure step7{deleterecord)};
var
findid:integer;
temp:node;
begin
writeln('Enter the ID');
readln(findid);
{Repeat
if head^.next.id=findid then begin
temp:=head^.next;
new(temp);
temp^.next:=head^.next^.next;
dispose(head^.next^);}
while head^.next^.id <> findid do
head:=head^.next;
new(temp);
temp:=head^.next;
temp^.next:=head^.next^.next;
dispose(head^.next);
head^.next:=temp^.next;
dispose(temp);
end;

Begin
clrscr;
Inp;
readkey;
Out;
readkey;
step2;
readkey;
out;

{step3;
out(head);{Step 4} {
step5; {Search}
{out(head);    }
{dispose(head^.next);     }  { Step6   }
{out(tail);   }
{step7;
out(head);    }
readln;
End.