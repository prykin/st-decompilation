FUN_004e6a80:
004E6A80  55                        PUSH EBP
004E6A81  8B EC                     MOV EBP,ESP
004E6A83  51                        PUSH ECX
004E6A84  53                        PUSH EBX
004E6A85  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E6A88  8B D1                     MOV EDX,ECX
004E6A8A  85 DB                     TEST EBX,EBX
004E6A8C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004E6A8F  7C 68                     JL 0x004e6af9
004E6A91  83 FB 08                  CMP EBX,0x8
004E6A94  7D 63                     JGE 0x004e6af9
004E6A96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E6A99  83 F9 01                  CMP ECX,0x1
004E6A9C  7C 5B                     JL 0x004e6af9
004E6A9E  83 F9 29                  CMP ECX,0x29
004E6AA1  7D 56                     JGE 0x004e6af9
004E6AA3  56                        PUSH ESI
004E6AA4  57                        PUSH EDI
004E6AA5  8D BC 49 D1 0D 7C 00      LEA EDI,[ECX + ECX*0x2 + 0x7c0dd1]
004E6AAC  33 F6                     XOR ESI,ESI
004E6AAE  B8 01 00 00 00            MOV EAX,0x1
004E6AB3  80 3F 00                  CMP byte ptr [EDI],0x0
004E6AB6  74 38                     JZ 0x004e6af0
004E6AB8  EB 03                     JMP 0x004e6abd
LAB_004e6aba:
004E6ABA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_004e6abd:
004E6ABD  83 FE 03                  CMP ESI,0x3
004E6AC0  7D 2E                     JGE 0x004e6af0
004E6AC2  85 F6                     TEST ESI,ESI
004E6AC4  75 0F                     JNZ 0x004e6ad5
004E6AC6  33 C0                     XOR EAX,EAX
004E6AC8  8B CA                     MOV ECX,EDX
004E6ACA  8A 07                     MOV AL,byte ptr [EDI]
004E6ACC  50                        PUSH EAX
004E6ACD  53                        PUSH EBX
004E6ACE  E8 4A EC F1 FF            CALL 0x0040571d
004E6AD3  EB 0E                     JMP 0x004e6ae3
LAB_004e6ad5:
004E6AD5  33 C9                     XOR ECX,ECX
004E6AD7  8A 0C 37                  MOV CL,byte ptr [EDI + ESI*0x1]
004E6ADA  51                        PUSH ECX
004E6ADB  53                        PUSH EBX
004E6ADC  8B CA                     MOV ECX,EDX
004E6ADE  E8 88 AD F1 FF            CALL 0x0040186b
LAB_004e6ae3:
004E6AE3  85 C0                     TEST EAX,EAX
004E6AE5  74 09                     JZ 0x004e6af0
004E6AE7  8A 4C 37 01               MOV CL,byte ptr [EDI + ESI*0x1 + 0x1]
004E6AEB  46                        INC ESI
004E6AEC  84 C9                     TEST CL,CL
004E6AEE  75 CA                     JNZ 0x004e6aba
LAB_004e6af0:
004E6AF0  5F                        POP EDI
004E6AF1  5E                        POP ESI
004E6AF2  5B                        POP EBX
004E6AF3  8B E5                     MOV ESP,EBP
004E6AF5  5D                        POP EBP
004E6AF6  C2 08 00                  RET 0x8
LAB_004e6af9:
004E6AF9  33 C0                     XOR EAX,EAX
004E6AFB  5B                        POP EBX
004E6AFC  8B E5                     MOV ESP,EBP
004E6AFE  5D                        POP EBP
004E6AFF  C2 08 00                  RET 0x8
