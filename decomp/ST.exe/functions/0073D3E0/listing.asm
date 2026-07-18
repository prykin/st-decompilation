FUN_0073d3e0:
0073D3E0  55                        PUSH EBP
0073D3E1  8B EC                     MOV EBP,ESP
0073D3E3  83 EC 10                  SUB ESP,0x10
0073D3E6  83 3D EC A5 85 00 00      CMP dword ptr [0x0085a5ec],0x0
0073D3ED  75 05                     JNZ 0x0073d3f4
0073D3EF  E8 CC 96 FF FF            CALL 0x00736ac0
LAB_0073d3f4:
0073D3F4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073D3FB  A1 D8 71 85 00            MOV EAX,[0x008571d8]
0073D400  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073d403:
0073D403  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D406  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073D409  85 D2                     TEST EDX,EDX
0073D40B  74 2C                     JZ 0x0073d439
0073D40D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D410  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D413  83 F9 3D                  CMP ECX,0x3d
0073D416  74 09                     JZ 0x0073d421
0073D418  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073D41B  83 C2 01                  ADD EDX,0x1
0073D41E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0073d421:
0073D421  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D424  50                        PUSH EAX
0073D425  E8 E6 97 FF FF            CALL 0x00736c10
0073D42A  83 C4 04                  ADD ESP,0x4
0073D42D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D430  8D 54 01 01               LEA EDX,[ECX + EAX*0x1 + 0x1]
0073D434  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D437  EB CA                     JMP 0x0073d403
LAB_0073d439:
0073D439  6A 6D                     PUSH 0x6d
0073D43B  68 C4 0A 7A 00            PUSH 0x7a0ac4
0073D440  6A 02                     PUSH 0x2
0073D442  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073D445  8D 0C 85 04 00 00 00      LEA ECX,[EAX*0x4 + 0x4]
0073D44C  51                        PUSH ECX
0073D44D  E8 B2 3C CC FF            CALL 0x00401104
0073D452  83 C4 10                  ADD ESP,0x10
0073D455  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073D458  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D45B  89 15 70 71 85 00         MOV dword ptr [0x00857170],EDX
0073D461  83 3D 70 71 85 00 00      CMP dword ptr [0x00857170],0x0
0073D468  75 0A                     JNZ 0x0073d474
0073D46A  6A 09                     PUSH 0x9
0073D46C  E8 DF 63 FF FF            CALL 0x00733850
0073D471  83 C4 04                  ADD ESP,0x4
LAB_0073d474:
0073D474  A1 D8 71 85 00            MOV EAX,[0x008571d8]
0073D479  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D47C  EB 09                     JMP 0x0073d487
LAB_0073d47e:
0073D47E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D481  03 4D F0                  ADD ECX,dword ptr [EBP + -0x10]
0073D484  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073d487:
0073D487  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D48A  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D48D  85 C0                     TEST EAX,EAX
0073D48F  74 66                     JZ 0x0073d4f7
0073D491  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D494  51                        PUSH ECX
0073D495  E8 76 97 FF FF            CALL 0x00736c10
0073D49A  83 C4 04                  ADD ESP,0x4
0073D49D  83 C0 01                  ADD EAX,0x1
0073D4A0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073D4A3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D4A6  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D4A9  83 F8 3D                  CMP EAX,0x3d
0073D4AC  74 47                     JZ 0x0073d4f5
0073D4AE  6A 79                     PUSH 0x79
0073D4B0  68 C4 0A 7A 00            PUSH 0x7a0ac4
0073D4B5  6A 02                     PUSH 0x2
0073D4B7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073D4BA  51                        PUSH ECX
0073D4BB  E8 44 3C CC FF            CALL 0x00401104
0073D4C0  83 C4 10                  ADD ESP,0x10
0073D4C3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D4C6  89 02                     MOV dword ptr [EDX],EAX
0073D4C8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D4CB  83 38 00                  CMP dword ptr [EAX],0x0
0073D4CE  75 0A                     JNZ 0x0073d4da
0073D4D0  6A 09                     PUSH 0x9
0073D4D2  E8 79 63 FF FF            CALL 0x00733850
0073D4D7  83 C4 04                  ADD ESP,0x4
LAB_0073d4da:
0073D4DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D4DD  51                        PUSH ECX
0073D4DE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D4E1  8B 02                     MOV EAX,dword ptr [EDX]
0073D4E3  50                        PUSH EAX
0073D4E4  E8 57 CD FF FF            CALL 0x0073a240
0073D4E9  83 C4 08                  ADD ESP,0x8
0073D4EC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D4EF  83 C1 04                  ADD ECX,0x4
0073D4F2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0073d4f5:
0073D4F5  EB 87                     JMP 0x0073d47e
LAB_0073d4f7:
0073D4F7  6A 02                     PUSH 0x2
0073D4F9  8B 15 D8 71 85 00         MOV EDX,dword ptr [0x008571d8]
0073D4FF  52                        PUSH EDX
0073D500  E8 07 70 CC FF            CALL 0x0040450c
0073D505  83 C4 08                  ADD ESP,0x8
0073D508  C7 05 D8 71 85 00 00 00 00 00  MOV dword ptr [0x008571d8],0x0
0073D512  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D515  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0073D51B  C7 05 DC A5 85 00 01 00 00 00  MOV dword ptr [0x0085a5dc],0x1
0073D525  8B E5                     MOV ESP,EBP
0073D527  5D                        POP EBP
0073D528  C3                        RET
