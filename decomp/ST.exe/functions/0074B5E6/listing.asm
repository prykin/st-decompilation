FUN_0074b5e6:
0074B5E6  55                        PUSH EBP
0074B5E7  8B EC                     MOV EBP,ESP
0074B5E9  53                        PUSH EBX
0074B5EA  56                        PUSH ESI
0074B5EB  57                        PUSH EDI
0074B5EC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074B5EF  33 F6                     XOR ESI,ESI
0074B5F1  8B D9                     MOV EBX,ECX
0074B5F3  3B FE                     CMP EDI,ESI
0074B5F5  75 07                     JNZ 0x0074b5fe
0074B5F7  B8 03 40 00 80            MOV EAX,0x80004003
0074B5FC  EB 63                     JMP 0x0074b661
LAB_0074b5fe:
0074B5FE  8D 43 7C                  LEA EAX,[EBX + 0x7c]
0074B601  50                        PUSH EAX
0074B602  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074B605  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074B60B  39 73 18                  CMP dword ptr [EBX + 0x18],ESI
0074B60E  74 08                     JZ 0x0074b618
0074B610  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0074B613  83 FB 01                  CMP EBX,0x1
0074B616  7F 04                     JG 0x0074b61c
LAB_0074b618:
0074B618  89 37                     MOV dword ptr [EDI],ESI
0074B61A  EB 3A                     JMP 0x0074b656
LAB_0074b61c:
0074B61C  8B C3                     MOV EAX,EBX
0074B61E  56                        PUSH ESI
0074B61F  99                        CDQ
0074B620  56                        PUSH ESI
0074B621  52                        PUSH EDX
0074B622  50                        PUSH EAX
0074B623  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074B626  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074B629  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074B62C  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074B62F  E8 52 21 00 00            CALL 0x0074d786
0074B634  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074B637  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0074B63A  2B C8                     SUB ECX,EAX
0074B63C  8D 43 FF                  LEA EAX,[EBX + -0x1]
0074B63F  1B F2                     SBB ESI,EDX
0074B641  99                        CDQ
0074B642  52                        PUSH EDX
0074B643  50                        PUSH EAX
0074B644  56                        PUSH ESI
0074B645  51                        PUSH ECX
0074B646  E8 F5 2D FE FF            CALL 0x0072e440
0074B64B  50                        PUSH EAX
0074B64C  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0074B64F  E8 30 FF FF FF            CALL 0x0074b584
0074B654  89 07                     MOV dword ptr [EDI],EAX
LAB_0074b656:
0074B656  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074B659  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074B65F  33 C0                     XOR EAX,EAX
LAB_0074b661:
0074B661  5F                        POP EDI
0074B662  5E                        POP ESI
0074B663  5B                        POP EBX
0074B664  5D                        POP EBP
0074B665  C2 18 00                  RET 0x18
