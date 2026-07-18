FUN_00490b30:
00490B30  55                        PUSH EBP
00490B31  8B EC                     MOV EBP,ESP
00490B33  53                        PUSH EBX
00490B34  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00490B37  56                        PUSH ESI
00490B38  8B F1                     MOV ESI,ECX
00490B3A  38 9E 3A 03 00 00         CMP byte ptr [ESI + 0x33a],BL
00490B40  75 18                     JNZ 0x00490b5a
00490B42  66 8B 86 3F 03 00 00      MOV AX,word ptr [ESI + 0x33f]
00490B49  66 3B 45 0C               CMP AX,word ptr [EBP + 0xc]
00490B4D  75 0B                     JNZ 0x00490b5a
00490B4F  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00490B53  66 89 8E 3F 03 00 00      MOV word ptr [ESI + 0x33f],CX
LAB_00490b5a:
00490B5A  83 BE 5D 04 00 00 02      CMP dword ptr [ESI + 0x45d],0x2
00490B61  0F 85 D5 00 00 00         JNZ 0x00490c3c
00490B67  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00490B6E  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00490B75  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00490B7C  57                        PUSH EDI
00490B7D  66 85 C0                  TEST AX,AX
00490B80  7C 53                     JL 0x00490bd5
00490B82  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00490B89  66 3B C7                  CMP AX,DI
00490B8C  7D 47                     JGE 0x00490bd5
00490B8E  66 85 D2                  TEST DX,DX
00490B91  7C 42                     JL 0x00490bd5
00490B93  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00490B9A  7D 39                     JGE 0x00490bd5
00490B9C  66 85 C9                  TEST CX,CX
00490B9F  7C 34                     JL 0x00490bd5
00490BA1  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00490BA8  7D 2B                     JGE 0x00490bd5
00490BAA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00490BB1  0F BF C9                  MOVSX ECX,CX
00490BB4  0F AF D9                  IMUL EBX,ECX
00490BB7  0F BF CF                  MOVSX ECX,DI
00490BBA  0F BF D2                  MOVSX EDX,DX
00490BBD  0F AF CA                  IMUL ECX,EDX
00490BC0  0F BF C0                  MOVSX EAX,AX
00490BC3  03 D9                     ADD EBX,ECX
00490BC5  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00490BCB  03 D8                     ADD EBX,EAX
00490BCD  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
00490BD0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00490BD3  EB 02                     JMP 0x00490bd7
LAB_00490bd5:
00490BD5  33 C0                     XOR EAX,EAX
LAB_00490bd7:
00490BD7  85 C0                     TEST EAX,EAX
00490BD9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00490BDC  5F                        POP EDI
00490BDD  74 0D                     JZ 0x00490bec
00490BDF  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
00490BE2  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
00490BE8  3B D1                     CMP EDX,ECX
00490BEA  74 1E                     JZ 0x00490c0a
LAB_00490bec:
00490BEC  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
00490BF2  8D 45 08                  LEA EAX,[EBP + 0x8]
00490BF5  50                        PUSH EAX
00490BF6  51                        PUSH ECX
00490BF7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00490BFD  E8 CE 56 25 00            CALL 0x006e62d0
00490C02  83 F8 FC                  CMP EAX,-0x4
00490C05  74 35                     JZ 0x00490c3c
00490C07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00490c0a:
00490C0A  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00490C0E  66 39 50 32               CMP word ptr [EAX + 0x32],DX
00490C12  75 28                     JNZ 0x00490c3c
00490C14  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00490C17  0F BE CB                  MOVSX ECX,BL
00490C1A  3B D1                     CMP EDX,ECX
00490C1C  75 1E                     JNZ 0x00490c3c
00490C1E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00490C21  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00490C27  6A 01                     PUSH 0x1
00490C29  52                        PUSH EDX
00490C2A  53                        PUSH EBX
00490C2B  E8 8A 1C F7 FF            CALL 0x004028ba
00490C30  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00490C33  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00490C36  89 86 F4 07 00 00         MOV dword ptr [ESI + 0x7f4],EAX
LAB_00490c3c:
00490C3C  5E                        POP ESI
00490C3D  5B                        POP EBX
00490C3E  5D                        POP EBP
00490C3F  C2 0C 00                  RET 0xc
