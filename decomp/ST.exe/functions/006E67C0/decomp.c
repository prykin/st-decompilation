
void __thiscall
FUN_006e67c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x452);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_006e67ea:
      puVar1 = Library::DKW::LIB::FUN_006aac10(0x1c);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_006b9910((undefined4 *)((int)this + 0x452),(int)puVar1);
LAB_006e67fe:
        puVar1[2] = param_1;
        puVar1[3] = param_2;
        puVar1[1] = param_6;
        puVar1[4] = param_3;
        puVar1[5] = param_4;
        puVar1[6] = param_5;
      }
      return;
    }
    if (puVar1[1] == param_6) {
      if (puVar1 != (undefined4 *)0x0) goto LAB_006e67fe;
      goto LAB_006e67ea;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

