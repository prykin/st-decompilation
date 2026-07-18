FUN_006e9210:
006E9210  55                        PUSH EBP
006E9211  8B EC                     MOV EBP,ESP
006E9213  56                        PUSH ESI
006E9214  8B F1                     MOV ESI,ECX
006E9216  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E9219  57                        PUSH EDI
006E921A  3B 8E 10 03 00 00         CMP ECX,dword ptr [ESI + 0x310]
006E9220  0F 83 84 00 00 00         JNC 0x006e92aa
006E9226  8B 96 1C 03 00 00         MOV EDX,dword ptr [ESI + 0x31c]
006E922C  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E922F  C1 E0 03                  SHL EAX,0x3
006E9232  2B C1                     SUB EAX,ECX
006E9234  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9237  8D 3C 82                  LEA EDI,[EDX + EAX*0x4]
006E923A  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006E923D  F6 C4 80                  TEST AH,0x80
006E9240  74 68                     JZ 0x006e92aa
006E9242  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006E9245  25 FF FF 87 FF            AND EAX,0xff87ffff
006E924A  83 C9 02                  OR ECX,0x2
006E924D  0C 0C                     OR AL,0xc
006E924F  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
006E9252  89 07                     MOV dword ptr [EDI],EAX
006E9254  DD 86 00 03 00 00         FLD double ptr [ESI + 0x300]
006E925A  DC 86 F8 02 00 00         FADD double ptr [ESI + 0x2f8]
006E9260  D8 4D 0C                  FMUL float ptr [EBP + 0xc]
006E9263  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E9269  D9 45 10                  FLD float ptr [EBP + 0x10]
006E926C  DC 8E 08 03 00 00         FMUL double ptr [ESI + 0x308]
006E9272  DE C1                     FADDP
006E9274  E8 0F 50 04 00            CALL 0x0072e288
006E9279  89 47 2C                  MOV dword ptr [EDI + 0x2c],EAX
006E927C  DD 86 00 03 00 00         FLD double ptr [ESI + 0x300]
006E9282  DC 86 F8 02 00 00         FADD double ptr [ESI + 0x2f8]
006E9288  D8 4D 14                  FMUL float ptr [EBP + 0x14]
006E928B  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E9291  D9 45 18                  FLD float ptr [EBP + 0x18]
006E9294  DC 8E 08 03 00 00         FMUL double ptr [ESI + 0x308]
006E929A  DE C1                     FADDP
006E929C  E8 E7 4F 04 00            CALL 0x0072e288
006E92A1  89 47 30                  MOV dword ptr [EDI + 0x30],EAX
006E92A4  5F                        POP EDI
006E92A5  5E                        POP ESI
006E92A6  5D                        POP EBP
006E92A7  C2 14 00                  RET 0x14
LAB_006e92aa:
006E92AA  83 F9 FF                  CMP ECX,-0x1
006E92AD  74 0A                     JZ 0x006e92b9
006E92AF  68 FC EC 7E 00            PUSH 0x7eecfc
006E92B4  E8 97 F9 FF FF            CALL 0x006e8c50
LAB_006e92b9:
006E92B9  5F                        POP EDI
006E92BA  5E                        POP ESI
006E92BB  5D                        POP EBP
006E92BC  C2 14 00                  RET 0x14
