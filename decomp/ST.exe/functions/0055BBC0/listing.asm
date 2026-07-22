sub_0055BBC0:
0055BBC0  55                        PUSH EBP
0055BBC1  8B EC                     MOV EBP,ESP
0055BBC3  83 EC 0C                  SUB ESP,0xc
0055BBC6  56                        PUSH ESI
0055BBC7  8B F1                     MOV ESI,ECX
0055BBC9  8B 86 14 01 00 00         MOV EAX,dword ptr [ESI + 0x114]
0055BBCF  85 C0                     TEST EAX,EAX
0055BBD1  74 7B                     JZ 0x0055bc4e
0055BBD3  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
0055BBD9  85 C0                     TEST EAX,EAX
0055BBDB  74 71                     JZ 0x0055bc4e
0055BBDD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055BBE0  83 F8 08                  CMP EAX,0x8
0055BBE3  73 69                     JNC 0x0055bc4e
0055BBE5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0055BBEB  85 C9                     TEST ECX,ECX
0055BBED  74 0D                     JZ 0x0055bbfc
0055BBEF  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0055BBF2  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
0055BBFA  73 52                     JNC 0x0055bc4e
LAB_0055bbfc:
0055BBFC  33 C9                     XOR ECX,ECX
0055BBFE  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
0055BC01  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0055BC04  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0055BC07  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055BC0A  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0055BC0E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055BC11  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0055BC15  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
0055BC19  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0055BC1C  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
0055BC1F  8D 4D F4                  LEA ECX,[EBP + -0xc]
0055BC22  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
0055BC26  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
0055BC29  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
0055BC2C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0055BC2F  51                        PUSH ECX
0055BC30  8B CE                     MOV ECX,ESI
0055BC32  88 55 FB                  MOV byte ptr [EBP + -0x5],DL
0055BC35  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055BC38  E8 67 55 EA FF            CALL 0x004011a4
0055BC3D  85 C0                     TEST EAX,EAX
0055BC3F  7C 0D                     JL 0x0055bc4e
0055BC41  8B 96 10 01 00 00         MOV EDX,dword ptr [ESI + 0x110]
0055BC47  50                        PUSH EAX
0055BC48  52                        PUSH EDX
0055BC49  E8 22 50 15 00            CALL 0x006b0c70
LAB_0055bc4e:
0055BC4E  5E                        POP ESI
0055BC4F  8B E5                     MOV ESP,EBP
0055BC51  5D                        POP EBP
0055BC52  C2 1C 00                  RET 0x1c
