FUN_00751c40:
00751C40  55                        PUSH EBP
00751C41  8B EC                     MOV EBP,ESP
00751C43  83 EC 34                  SUB ESP,0x34
00751C46  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751C49  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00751C4C  83 F8 10                  CMP EAX,0x10
00751C4F  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
00751C53  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00751C56  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
00751C5D  7C 2E                     JL 0x00751c8d
00751C5F  83 F9 03                  CMP ECX,0x3
00751C62  75 29                     JNZ 0x00751c8d
00751C64  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00751C67  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00751C6A  85 C9                     TEST ECX,ECX
00751C6C  75 22                     JNZ 0x00751c90
00751C6E  83 F8 10                  CMP EAX,0x10
00751C71  75 1D                     JNZ 0x00751c90
00751C73  C7 45 F4 00 F8 00 00      MOV dword ptr [EBP + -0xc],0xf800
00751C7A  C7 45 F8 E0 07 00 00      MOV dword ptr [EBP + -0x8],0x7e0
00751C81  C7 45 FC 1F 00 00 00      MOV dword ptr [EBP + -0x4],0x1f
00751C88  8D 4D F4                  LEA ECX,[EBP + -0xc]
00751C8B  EB 03                     JMP 0x00751c90
LAB_00751c8d:
00751C8D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_00751c90:
00751C90  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751C93  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00751C96  50                        PUSH EAX
00751C97  52                        PUSH EDX
00751C98  6A 00                     PUSH 0x0
00751C9A  6A 00                     PUSH 0x0
00751C9C  8D 45 CC                  LEA EAX,[EBP + -0x34]
00751C9F  51                        PUSH ECX
00751CA0  50                        PUSH EAX
00751CA1  E8 8A 28 00 00            CALL 0x00754530
00751CA6  8B E5                     MOV ESP,EBP
00751CA8  5D                        POP EBP
00751CA9  C2 14 00                  RET 0x14
