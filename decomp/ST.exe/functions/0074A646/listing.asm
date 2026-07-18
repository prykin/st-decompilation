FUN_0074a646:
0074A646  55                        PUSH EBP
0074A647  8B EC                     MOV EBP,ESP
0074A649  51                        PUSH ECX
0074A64A  51                        PUSH ECX
0074A64B  53                        PUSH EBX
0074A64C  56                        PUSH ESI
0074A64D  8B F1                     MOV ESI,ECX
0074A64F  57                        PUSH EDI
0074A650  33 C9                     XOR ECX,ECX
0074A652  39 4E 70                  CMP dword ptr [ESI + 0x70],ECX
0074A655  74 6D                     JZ 0x0074a6c4
0074A657  39 4E 74                  CMP dword ptr [ESI + 0x74],ECX
0074A65A  75 68                     JNZ 0x0074a6c4
0074A65C  39 8E C0 00 00 00         CMP dword ptr [ESI + 0xc0],ECX
0074A662  75 60                     JNZ 0x0074a6c4
0074A664  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0074A667  3B C1                     CMP EAX,ECX
0074A669  74 50                     JZ 0x0074a6bb
0074A66B  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
0074A66E  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
0074A671  03 BE B8 00 00 00         ADD EDI,dword ptr [ESI + 0xb8]
0074A677  8B 08                     MOV ECX,dword ptr [EAX]
0074A679  8D 55 F8                  LEA EDX,[EBP + -0x8]
0074A67C  13 9E BC 00 00 00         ADC EBX,dword ptr [ESI + 0xbc]
0074A682  52                        PUSH EDX
0074A683  50                        PUSH EAX
0074A684  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074A687  2B 7D F8                  SUB EDI,dword ptr [EBP + -0x8]
0074A68A  6A 00                     PUSH 0x0
0074A68C  68 10 27 00 00            PUSH 0x2710
0074A691  1B 5D FC                  SBB EBX,dword ptr [EBP + -0x4]
0074A694  53                        PUSH EBX
0074A695  57                        PUSH EDI
0074A696  E8 A5 3D FE FF            CALL 0x0072e440
0074A69B  83 F8 32                  CMP EAX,0x32
0074A69E  7C 1B                     JL 0x0074a6bb
0074A6A0  6A 00                     PUSH 0x0
0074A6A2  56                        PUSH ESI
0074A6A3  68 06 A6 74 00            PUSH 0x74a606
0074A6A8  6A 0A                     PUSH 0xa
0074A6AA  50                        PUSH EAX
0074A6AB  FF 15 F0 BE 85 00         CALL dword ptr [0x0085bef0]
0074A6B1  85 C0                     TEST EAX,EAX
0074A6B3  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
0074A6B9  75 09                     JNZ 0x0074a6c4
LAB_0074a6bb:
0074A6BB  8B CE                     MOV ECX,ESI
0074A6BD  E8 09 00 00 00            CALL 0x0074a6cb
0074A6C2  EB 02                     JMP 0x0074a6c6
LAB_0074a6c4:
0074A6C4  33 C0                     XOR EAX,EAX
LAB_0074a6c6:
0074A6C6  5F                        POP EDI
0074A6C7  5E                        POP ESI
0074A6C8  5B                        POP EBX
0074A6C9  C9                        LEAVE
0074A6CA  C3                        RET
