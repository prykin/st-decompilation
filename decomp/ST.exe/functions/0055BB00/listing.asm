SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BB00:
0055BB00  55                        PUSH EBP
0055BB01  8B EC                     MOV EBP,ESP
0055BB03  83 EC 0C                  SUB ESP,0xc
0055BB06  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055BB0C  85 C0                     TEST EAX,EAX
0055BB0E  74 6D                     JZ 0x0055bb7d
0055BB10  8B 91 10 01 00 00         MOV EDX,dword ptr [ECX + 0x110]
0055BB16  85 D2                     TEST EDX,EDX
0055BB18  74 63                     JZ 0x0055bb7d
0055BB1A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055BB1D  83 F8 08                  CMP EAX,0x8
0055BB20  73 5B                     JNC 0x0055bb7d
0055BB22  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0055BB28  85 C9                     TEST ECX,ECX
0055BB2A  74 11                     JZ 0x0055bb3d
0055BB2C  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0055BB2F  53                        PUSH EBX
0055BB30  8A 9C C9 E9 87 80 00      MOV BL,byte ptr [ECX + ECX*0x8 + 0x8087e9]
0055BB37  80 FB 08                  CMP BL,0x8
0055BB3A  5B                        POP EBX
0055BB3B  73 40                     JNC 0x0055bb7d
LAB_0055bb3d:
0055BB3D  33 C9                     XOR ECX,ECX
0055BB3F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0055BB42  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
0055BB45  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055BB48  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
0055BB4B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055BB4E  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0055BB51  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
0055BB54  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0055BB58  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
0055BB5C  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0055BB60  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0055BB64  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0055BB67  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
0055BB6A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0055BB6D  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
0055BB70  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0055BB73  50                        PUSH EAX
0055BB74  52                        PUSH EDX
0055BB75  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055BB78  E8 43 26 15 00            CALL 0x006ae1c0
LAB_0055bb7d:
0055BB7D  8B E5                     MOV ESP,EBP
0055BB7F  5D                        POP EBP
0055BB80  C2 1C 00                  RET 0x1c
