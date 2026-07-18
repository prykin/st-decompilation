FUN_0075fd80:
0075FD80  55                        PUSH EBP
0075FD81  8B EC                     MOV EBP,ESP
0075FD83  83 EC 14                  SUB ESP,0x14
0075FD86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FD89  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075FD8F  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0075FD92  8B 48 68                  MOV ECX,dword ptr [EAX + 0x68]
0075FD95  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075FD98  8B 50 70                  MOV EDX,dword ptr [EAX + 0x70]
0075FD9B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075FD9E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075FDA1  85 C0                     TEST EAX,EAX
0075FDA3  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075FDA6  7E 7B                     JLE 0x0075fe23
0075FDA8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075FDAB  53                        PUSH EBX
0075FDAC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075FDAF  56                        PUSH ESI
0075FDB0  57                        PUSH EDI
0075FDB1  8B F9                     MOV EDI,ECX
0075FDB3  2B D9                     SUB EBX,ECX
0075FDB5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075FDB8  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0075FDBB  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_0075fdbe:
0075FDBE  8B 07                     MOV EAX,dword ptr [EDI]
0075FDC0  8B 34 3B                  MOV ESI,dword ptr [EBX + EDI*0x1]
0075FDC3  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075FDC6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075FDC9  85 C0                     TEST EAX,EAX
0075FDCB  76 44                     JBE 0x0075fe11
0075FDCD  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0075fdd0:
0075FDD0  33 C9                     XOR ECX,ECX
0075FDD2  85 D2                     TEST EDX,EDX
0075FDD4  7E 23                     JLE 0x0075fdf9
0075FDD6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075FDD9  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0075fddc:
0075FDDC  8B 38                     MOV EDI,dword ptr [EAX]
0075FDDE  33 D2                     XOR EDX,EDX
0075FDE0  8A 16                     MOV DL,byte ptr [ESI]
0075FDE2  33 DB                     XOR EBX,EBX
0075FDE4  83 C0 04                  ADD EAX,0x4
0075FDE7  8A 1C 3A                  MOV BL,byte ptr [EDX + EDI*0x1]
0075FDEA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075FDED  03 CB                     ADD ECX,EBX
0075FDEF  46                        INC ESI
0075FDF0  4A                        DEC EDX
0075FDF1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075FDF4  75 E6                     JNZ 0x0075fddc
0075FDF6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_0075fdf9:
0075FDF9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075FDFC  88 08                     MOV byte ptr [EAX],CL
0075FDFE  40                        INC EAX
0075FDFF  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075FE02  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075FE05  48                        DEC EAX
0075FE06  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075FE09  75 C5                     JNZ 0x0075fdd0
0075FE0B  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075FE0E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0075fe11:
0075FE11  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075FE14  83 C7 04                  ADD EDI,0x4
0075FE17  48                        DEC EAX
0075FE18  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075FE1B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075FE1E  75 9E                     JNZ 0x0075fdbe
0075FE20  5F                        POP EDI
0075FE21  5E                        POP ESI
0075FE22  5B                        POP EBX
LAB_0075fe23:
0075FE23  8B E5                     MOV ESP,EBP
0075FE25  5D                        POP EBP
0075FE26  C2 10 00                  RET 0x10
