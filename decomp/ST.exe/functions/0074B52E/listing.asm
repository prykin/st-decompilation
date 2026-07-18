FUN_0074b52e:
0074B52E  53                        PUSH EBX
0074B52F  56                        PUSH ESI
0074B530  57                        PUSH EDI
0074B531  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074B535  85 FF                     TEST EDI,EDI
0074B537  75 07                     JNZ 0x0074b540
0074B539  B8 03 40 00 80            MOV EAX,0x80004003
0074B53E  EB 3E                     JMP 0x0074b57e
LAB_0074b540:
0074B540  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074B544  8D 5E B4                  LEA EBX,[ESI + -0x4c]
0074B547  53                        PUSH EBX
0074B548  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074B54E  33 C9                     XOR ECX,ECX
0074B550  39 8E 50 FF FF FF         CMP dword ptr [ESI + 0xffffff50],ECX
0074B556  74 08                     JZ 0x0074b560
0074B558  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0074B55B  83 F8 01                  CMP EAX,0x1
0074B55E  7F 04                     JG 0x0074b564
LAB_0074b560:
0074B560  89 0F                     MOV dword ptr [EDI],ECX
0074B562  EB 11                     JMP 0x0074b575
LAB_0074b564:
0074B564  48                        DEC EAX
0074B565  99                        CDQ
0074B566  52                        PUSH EDX
0074B567  50                        PUSH EAX
0074B568  FF 76 4C                  PUSH dword ptr [ESI + 0x4c]
0074B56B  FF 76 48                  PUSH dword ptr [ESI + 0x48]
0074B56E  E8 CD 2E FE FF            CALL 0x0072e440
0074B573  89 07                     MOV dword ptr [EDI],EAX
LAB_0074b575:
0074B575  53                        PUSH EBX
0074B576  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074B57C  33 C0                     XOR EAX,EAX
LAB_0074b57e:
0074B57E  5F                        POP EDI
0074B57F  5E                        POP ESI
0074B580  5B                        POP EBX
0074B581  C2 08 00                  RET 0x8
