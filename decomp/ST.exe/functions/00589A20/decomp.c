
undefined4 __thiscall
FUN_00589a20(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar1 = *(short *)((int)this + 0x45) + -0x1c;
  sVar4 = *(short *)((int)this + 0x45) + 0x1c;
  sVar6 = *(short *)((int)this + 0x41) + -0x1c;
  sVar2 = *(short *)((int)this + 0x43) + -0x1c;
  sVar3 = *(short *)((int)this + 0x41) + 0x1c;
  sVar5 = *(short *)((int)this + 0x43) + 0x1c;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

