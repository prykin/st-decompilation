FUN_00749a26:
00749A26  56                        PUSH ESI
00749A27  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00749A2B  8B 06                     MOV EAX,dword ptr [ESI]
00749A2D  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
00749A31  83 C0 30                  ADD EAX,0x30
00749A34  66 83 F9 08               CMP CX,0x8
00749A38  76 06                     JBE 0x00749a40
00749A3A  83 7E 20 00               CMP dword ptr [ESI + 0x20],0x0
00749A3E  74 11                     JZ 0x00749a51
LAB_00749a40:
00749A40  6A 01                     PUSH 0x1
00749A42  5A                        POP EDX
00749A43  D3 E2                     SHL EDX,CL
00749A45  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00749A48  85 C9                     TEST ECX,ECX
00749A4A  74 02                     JZ 0x00749a4e
00749A4C  8B D1                     MOV EDX,ECX
LAB_00749a4e:
00749A4E  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
LAB_00749a51:
00749A51  83 7E 10 03               CMP dword ptr [ESI + 0x10],0x3
00749A55  75 03                     JNZ 0x00749a5a
00749A57  83 C0 0C                  ADD EAX,0xc
LAB_00749a5a:
00749A5A  5E                        POP ESI
00749A5B  C2 04 00                  RET 0x4
