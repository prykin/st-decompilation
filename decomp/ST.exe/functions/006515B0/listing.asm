FUN_006515b0:
006515B0  55                        PUSH EBP
006515B1  8B EC                     MOV EBP,ESP
006515B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006515B6  56                        PUSH ESI
006515B7  57                        PUSH EDI
006515B8  33 FF                     XOR EDI,EDI
006515BA  33 C9                     XOR ECX,ECX
006515BC  BA 08 00 00 00            MOV EDX,0x8
LAB_006515c1:
006515C1  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
006515C8  0F 85 D5 00 00 00         JNZ 0x006516a3
006515CE  41                        INC ECX
006515CF  83 F9 04                  CMP ECX,0x4
006515D2  7C ED                     JL 0x006515c1
006515D4  66 8B 08                  MOV CX,word ptr [EAX]
006515D7  66 83 F9 05               CMP CX,0x5
006515DB  7D 0E                     JGE 0x006515eb
006515DD  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
LAB_006515e0:
006515E0  66 83 F9 06               CMP CX,0x6
006515E4  7D 13                     JGE 0x006515f9
006515E6  89 78 1C                  MOV dword ptr [EAX + 0x1c],EDI
006515E9  EB 1C                     JMP 0x00651607
LAB_006515eb:
006515EB  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
006515F1  74 ED                     JZ 0x006515e0
006515F3  5F                        POP EDI
006515F4  5E                        POP ESI
006515F5  33 C0                     XOR EAX,EAX
006515F7  5D                        POP EBP
006515F8  C3                        RET
LAB_006515f9:
006515F9  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
006515FF  74 06                     JZ 0x00651607
00651601  5F                        POP EDI
00651602  5E                        POP ESI
00651603  33 C0                     XOR EAX,EAX
00651605  5D                        POP EBP
00651606  C3                        RET
LAB_00651607:
00651607  66 83 F9 07               CMP CX,0x7
0065160B  7D 14                     JGE 0x00651621
0065160D  C7 40 20 19 00 00 00      MOV dword ptr [EAX + 0x20],0x19
LAB_00651614:
00651614  83 CE FF                  OR ESI,0xffffffff
00651617  66 3B CA                  CMP CX,DX
0065161A  7D 13                     JGE 0x0065162f
0065161C  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
0065161F  EB 1C                     JMP 0x0065163d
LAB_00651621:
00651621  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651627  74 EB                     JZ 0x00651614
00651629  5F                        POP EDI
0065162A  5E                        POP ESI
0065162B  33 C0                     XOR EAX,EAX
0065162D  5D                        POP EBP
0065162E  C3                        RET
LAB_0065162f:
0065162F  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00651635  74 06                     JZ 0x0065163d
00651637  5F                        POP EDI
00651638  5E                        POP ESI
00651639  33 C0                     XOR EAX,EAX
0065163B  5D                        POP EBP
0065163C  C3                        RET
LAB_0065163d:
0065163D  66 83 F9 09               CMP CX,0x9
00651641  7D 0E                     JGE 0x00651651
00651643  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
LAB_00651646:
00651646  66 83 F9 0A               CMP CX,0xa
0065164A  7D 13                     JGE 0x0065165f
0065164C  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
0065164F  EB 1C                     JMP 0x0065166d
LAB_00651651:
00651651  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00651657  74 ED                     JZ 0x00651646
00651659  5F                        POP EDI
0065165A  5E                        POP ESI
0065165B  33 C0                     XOR EAX,EAX
0065165D  5D                        POP EBP
0065165E  C3                        RET
LAB_0065165f:
0065165F  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00651665  74 06                     JZ 0x0065166d
00651667  5F                        POP EDI
00651668  5E                        POP ESI
00651669  33 C0                     XOR EAX,EAX
0065166B  5D                        POP EBP
0065166C  C3                        RET
LAB_0065166d:
0065166D  66 83 F9 0B               CMP CX,0xb
00651671  7D 0E                     JGE 0x00651681
00651673  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
LAB_00651676:
00651676  66 83 F9 0C               CMP CX,0xc
0065167A  7D 13                     JGE 0x0065168f
0065167C  89 78 34                  MOV dword ptr [EAX + 0x34],EDI
0065167F  EB 1D                     JMP 0x0065169e
LAB_00651681:
00651681  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
00651687  74 ED                     JZ 0x00651676
00651689  5F                        POP EDI
0065168A  5E                        POP ESI
0065168B  33 C0                     XOR EAX,EAX
0065168D  5D                        POP EBP
0065168E  C3                        RET
LAB_0065168f:
0065168F  80 B8 DB 00 00 00 0A      CMP byte ptr [EAX + 0xdb],0xa
00651696  74 06                     JZ 0x0065169e
00651698  5F                        POP EDI
00651699  5E                        POP ESI
0065169A  33 C0                     XOR EAX,EAX
0065169C  5D                        POP EBP
0065169D  C3                        RET
LAB_0065169e:
0065169E  39 78 10                  CMP dword ptr [EAX + 0x10],EDI
006516A1  7D 06                     JGE 0x006516a9
LAB_006516a3:
006516A3  5F                        POP EDI
006516A4  5E                        POP ESI
006516A5  33 C0                     XOR EAX,EAX
006516A7  5D                        POP EBP
006516A8  C3                        RET
LAB_006516a9:
006516A9  39 78 20                  CMP dword ptr [EAX + 0x20],EDI
006516AC  7D 03                     JGE 0x006516b1
006516AE  89 78 20                  MOV dword ptr [EAX + 0x20],EDI
LAB_006516b1:
006516B1  8B 78 20                  MOV EDI,dword ptr [EAX + 0x20]
006516B4  B9 32 00 00 00            MOV ECX,0x32
006516B9  3B F9                     CMP EDI,ECX
006516BB  7E 03                     JLE 0x006516c0
006516BD  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
LAB_006516c0:
006516C0  39 70 30                  CMP dword ptr [EAX + 0x30],ESI
006516C3  7D 03                     JGE 0x006516c8
006516C5  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
LAB_006516c8:
006516C8  39 50 30                  CMP dword ptr [EAX + 0x30],EDX
006516CB  7E 03                     JLE 0x006516d0
006516CD  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
LAB_006516d0:
006516D0  5F                        POP EDI
006516D1  5E                        POP ESI
006516D2  B8 01 00 00 00            MOV EAX,0x1
006516D7  5D                        POP EBP
006516D8  C3                        RET
