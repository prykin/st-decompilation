FUN_006024b0:
006024B0  55                        PUSH EBP
006024B1  8B EC                     MOV EBP,ESP
006024B3  51                        PUSH ECX
006024B4  66 8B 91 55 02 00 00      MOV DX,word ptr [ECX + 0x255]
006024BB  53                        PUSH EBX
006024BC  56                        PUSH ESI
006024BD  66 8B B1 57 02 00 00      MOV SI,word ptr [ECX + 0x257]
006024C4  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
006024C7  57                        PUSH EDI
006024C8  66 8B B9 59 02 00 00      MOV DI,word ptr [ECX + 0x259]
006024CF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006024D2  8D 44 C2 64               LEA EAX,[EDX + EAX*0x8 + 0x64]
006024D6  0F BF D8                  MOVSX EBX,AX
006024D9  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
006024DC  89 99 7B 03 00 00         MOV dword ptr [ECX + 0x37b],EBX
006024E2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006024E5  8D 44 C6 64               LEA EAX,[ESI + EAX*0x8 + 0x64]
006024E9  0F BF C0                  MOVSX EAX,AX
006024EC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006024EF  89 81 7F 03 00 00         MOV dword ptr [ECX + 0x37f],EAX
006024F5  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
006024F8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006024FB  8D 04 C5 64 00 00 00      LEA EAX,[EAX*0x8 + 0x64]
00602502  0F BF C0                  MOVSX EAX,AX
00602505  89 81 83 03 00 00         MOV dword ptr [ECX + 0x383],EAX
0060250B  B8 01 00 00 00            MOV EAX,0x1
00602510  39 81 41 02 00 00         CMP dword ptr [ECX + 0x241],EAX
00602516  75 15                     JNZ 0x0060252d
00602518  83 C3 64                  ADD EBX,0x64
0060251B  89 99 7B 03 00 00         MOV dword ptr [ECX + 0x37b],EBX
00602521  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00602524  83 C3 64                  ADD EBX,0x64
00602527  89 99 7F 03 00 00         MOV dword ptr [ECX + 0x37f],EBX
LAB_0060252d:
0060252D  66 89 51 47               MOV word ptr [ECX + 0x47],DX
00602531  66 8B 91 7B 03 00 00      MOV DX,word ptr [ECX + 0x37b]
00602538  66 89 51 41               MOV word ptr [ECX + 0x41],DX
0060253C  66 8B 91 7F 03 00 00      MOV DX,word ptr [ECX + 0x37f]
00602543  66 89 51 43               MOV word ptr [ECX + 0x43],DX
00602547  66 8B 91 83 03 00 00      MOV DX,word ptr [ECX + 0x383]
0060254E  66 89 79 4B               MOV word ptr [ECX + 0x4b],DI
00602552  66 89 51 45               MOV word ptr [ECX + 0x45],DX
00602556  8B 91 45 02 00 00         MOV EDX,dword ptr [ECX + 0x245]
0060255C  66 89 71 49               MOV word ptr [ECX + 0x49],SI
00602560  5F                        POP EDI
00602561  5E                        POP ESI
00602562  89 91 72 03 00 00         MOV dword ptr [ECX + 0x372],EDX
00602568  89 81 A7 03 00 00         MOV dword ptr [ECX + 0x3a7],EAX
0060256E  89 81 6E 03 00 00         MOV dword ptr [ECX + 0x36e],EAX
00602574  C7 81 49 02 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x249],0xffffffff
0060257E  5B                        POP EBX
0060257F  8B E5                     MOV ESP,EBP
00602581  5D                        POP EBP
00602582  C3                        RET
