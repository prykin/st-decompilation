FUN_007327c0:
007327C0  55                        PUSH EBP
007327C1  8B EC                     MOV EBP,ESP
007327C3  83 EC 2C                  SUB ESP,0x2c
007327C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007327C9  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007327CC  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
007327CF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007327D2  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
007327D5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007327D8  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
LAB_007327df:
007327DF  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007327E3  7C 13                     JL 0x007327f8
007327E5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007327E8  D1 E1                     SHL ECX,0x1
007327EA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007327ED  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
007327F0  83 C2 01                  ADD EDX,0x1
007327F3  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
007327F6  EB E7                     JMP 0x007327df
LAB_007327f8:
007327F8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007327FB  69 C0 04 02 00 00         IMUL EAX,EAX,0x204
00732801  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00732804  8D 94 01 44 01 00 00      LEA EDX,[ECX + EAX*0x1 + 0x144]
0073280B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0073280E  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00732815  EB 09                     JMP 0x00732820
LAB_00732817:
00732817  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073281A  83 C0 01                  ADD EAX,0x1
0073281D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00732820:
00732820  83 7D E0 3F               CMP dword ptr [EBP + -0x20],0x3f
00732824  7D 20                     JGE 0x00732846
00732826  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00732829  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073282C  8D 04 CA                  LEA EAX,[EDX + ECX*0x8]
0073282F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00732832  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732835  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00732838  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0073283B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073283E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732841  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00732844  EB D1                     JMP 0x00732817
LAB_00732846:
00732846  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00732849  C1 E2 0F                  SHL EDX,0xf
0073284C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073284F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00732852  03 CA                     ADD ECX,EDX
00732854  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00732857  6A 04                     PUSH 0x4
00732859  68 00 10 00 00            PUSH 0x1000
0073285E  68 00 80 00 00            PUSH 0x8000
00732863  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732866  52                        PUSH EDX
00732867  FF 15 E4 BB 85 00         CALL dword ptr [0x0085bbe4]
0073286D  85 C0                     TEST EAX,EAX
0073286F  75 08                     JNZ 0x00732879
00732871  83 C8 FF                  OR EAX,0xffffffff
00732874  E9 31 01 00 00            JMP 0x007329aa
LAB_00732879:
00732879  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073287C  05 00 70 00 00            ADD EAX,0x7000
00732881  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00732884  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00732887  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073288A  EB 0C                     JMP 0x00732898
LAB_0073288c:
0073288C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073288F  81 C2 00 10 00 00         ADD EDX,0x1000
00732895  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00732898:
00732898  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073289B  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
0073289E  77 5D                     JA 0x007328fd
007328A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007328A3  C7 41 08 FF FF FF FF      MOV dword ptr [ECX + 0x8],0xffffffff
007328AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007328AD  C7 82 FC 0F 00 00 FF FF FF FF  MOV dword ptr [EDX + 0xffc],0xffffffff
007328B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007328BA  83 C0 0C                  ADD EAX,0xc
007328BD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007328C0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007328C3  C7 01 F0 0F 00 00         MOV dword ptr [ECX],0xff0
007328C9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007328CC  81 C2 00 10 00 00         ADD EDX,0x1000
007328D2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007328D5  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
007328D8  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007328DB  81 E9 00 10 00 00         SUB ECX,0x1000
007328E1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007328E4  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
007328E7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007328EA  05 EC 0F 00 00            ADD EAX,0xfec
007328EF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007328F2  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007328F5  C7 01 F0 0F 00 00         MOV dword ptr [ECX],0xff0
007328FB  EB 8F                     JMP 0x0073288c
LAB_007328fd:
007328FD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00732900  81 C2 F8 01 00 00         ADD EDX,0x1f8
00732906  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00732909  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073290C  83 C0 0C                  ADD EAX,0xc
0073290F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00732912  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00732915  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00732918  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073291B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0073291E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732921  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00732924  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00732927  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0073292A  83 C0 0C                  ADD EAX,0xc
0073292D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00732930  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00732933  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00732936  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00732939  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0073293C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073293F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00732942  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00732945  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00732948  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0073294B  C7 44 81 44 00 00 00 00   MOV dword ptr [ECX + EAX*0x4 + 0x44],0x0
00732953  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00732956  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00732959  C7 84 90 C4 00 00 00 01 00 00 00  MOV dword ptr [EAX + EDX*0x4 + 0xc4],0x1
00732964  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00732967  0F BE 51 43               MOVSX EDX,byte ptr [ECX + 0x43]
0073296B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0073296E  8A 48 43                  MOV CL,byte ptr [EAX + 0x43]
00732971  80 C1 01                  ADD CL,0x1
00732974  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00732977  88 48 43                  MOV byte ptr [EAX + 0x43],CL
0073297A  85 D2                     TEST EDX,EDX
0073297C  75 0F                     JNZ 0x0073298d
0073297E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00732981  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00732984  83 CA 01                  OR EDX,0x1
00732987  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073298A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_0073298d:
0073298D  BA 00 00 00 80            MOV EDX,0x80000000
00732992  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00732995  D3 EA                     SHR EDX,CL
00732997  F7 D2                     NOT EDX
00732999  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073299C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0073299F  23 CA                     AND ECX,EDX
007329A1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007329A4  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
007329A7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_007329aa:
007329AA  8B E5                     MOV ESP,EBP
007329AC  5D                        POP EBP
007329AD  C3                        RET
