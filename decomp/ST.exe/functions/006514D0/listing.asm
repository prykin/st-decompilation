FUN_006514d0:
006514D0  55                        PUSH EBP
006514D1  8B EC                     MOV EBP,ESP
006514D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006514D6  33 C9                     XOR ECX,ECX
006514D8  BA 08 00 00 00            MOV EDX,0x8
LAB_006514dd:
006514DD  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
006514E4  0F 85 8C 00 00 00         JNZ 0x00651576
006514EA  41                        INC ECX
006514EB  83 F9 04                  CMP ECX,0x4
006514EE  7C ED                     JL 0x006514dd
006514F0  66 8B 08                  MOV CX,word ptr [EAX]
006514F3  66 83 F9 05               CMP CX,0x5
006514F7  7D 09                     JGE 0x00651502
006514F9  C7 40 18 FF FF FF 3F      MOV dword ptr [EAX + 0x18],0x3fffffff
00651500  EB 08                     JMP 0x0065150a
LAB_00651502:
00651502  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00651508  75 6C                     JNZ 0x00651576
LAB_0065150a:
0065150A  66 83 F9 06               CMP CX,0x6
0065150E  7D 09                     JGE 0x00651519
00651510  C7 40 1C 01 00 00 00      MOV dword ptr [EAX + 0x1c],0x1
00651517  EB 08                     JMP 0x00651521
LAB_00651519:
00651519  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
0065151F  75 55                     JNZ 0x00651576
LAB_00651521:
00651521  66 83 F9 07               CMP CX,0x7
00651525  7D 09                     JGE 0x00651530
00651527  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
0065152E  EB 08                     JMP 0x00651538
LAB_00651530:
00651530  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651536  75 3E                     JNZ 0x00651576
LAB_00651538:
00651538  66 3B CA                  CMP CX,DX
0065153B  7D 09                     JGE 0x00651546
0065153D  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
00651544  EB 08                     JMP 0x0065154e
LAB_00651546:
00651546  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
0065154C  75 28                     JNZ 0x00651576
LAB_0065154e:
0065154E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651551  85 C9                     TEST ECX,ECX
00651553  7C 21                     JL 0x00651576
00651555  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00651558  85 C9                     TEST ECX,ECX
0065155A  7C 1A                     JL 0x00651576
0065155C  83 F9 02                  CMP ECX,0x2
0065155F  7F 15                     JG 0x00651576
00651561  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00651564  85 C9                     TEST ECX,ECX
00651566  7C 0E                     JL 0x00651576
00651568  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0065156B  33 C9                     XOR ECX,ECX
0065156D  85 D2                     TEST EDX,EDX
0065156F  0F 9D C1                  SETGE CL
00651572  8B C1                     MOV EAX,ECX
00651574  5D                        POP EBP
00651575  C3                        RET
LAB_00651576:
00651576  33 C0                     XOR EAX,EAX
00651578  5D                        POP EBP
00651579  C3                        RET
