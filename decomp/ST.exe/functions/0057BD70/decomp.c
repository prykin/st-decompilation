
undefined4 __thiscall
FUN_0057bd70(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar2 = 0;
  sVar5 = 0;
  sVar6 = 0;
  switch(*(undefined4 *)((int)this + 0x267)) {
  case 0xe7:
  case 0xe9:
    sVar2 = 0x1c;
    sVar5 = 0x1c;
    sVar6 = 0x1c;
    goto switchD_0057bd8f_default;
  case 0xe8:
  case 0xea:
    sVar2 = 0x16;
    break;
  case 0xeb:
    sVar2 = 0x1c;
    break;
  default:
    goto switchD_0057bd8f_default;
  }
  sVar5 = 0xc;
  sVar6 = 0xc;
switchD_0057bd8f_default:
  sVar3 = *(short *)((int)this + 0x43) - sVar5;
  sVar4 = *(short *)((int)this + 0x45) - sVar6;
  sVar1 = *(short *)((int)this + 0x41) - sVar2;
  sVar2 = sVar2 + *(short *)((int)this + 0x41);
  sVar5 = sVar5 + *(short *)((int)this + 0x43);
  sVar6 = sVar6 + *(short *)((int)this + 0x45);
  if ((((((sVar1 <= param_1) && (param_1 <= sVar2)) || ((sVar1 <= param_4 && (param_4 <= sVar2))))
       || ((param_1 <= sVar1 && (sVar2 <= param_4)))) &&
      (((sVar3 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar3 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar3 && (sVar5 <= param_5))))))))
     && ((((sVar4 <= param_3 && (param_3 <= sVar6)) || ((sVar4 <= param_6 && (param_6 <= sVar6))))
         || ((param_3 <= sVar4 && (sVar6 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

