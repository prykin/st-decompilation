FUN_00660620:
00660620  55                        PUSH EBP
00660621  8B EC                     MOV EBP,ESP
00660623  83 EC 14                  SUB ESP,0x14
00660626  33 C0                     XOR EAX,EAX
00660628  56                        PUSH ESI
00660629  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0066062C  8B F1                     MOV ESI,ECX
0066062E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00660631  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00660634  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00660637  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066063A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066063D  57                        PUSH EDI
0066063E  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
00660644  51                        PUSH ECX
00660645  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066064B  52                        PUSH EDX
0066064C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066064F  E8 A5 56 DA FF            CALL 0x00405cf9
00660654  85 C0                     TEST EAX,EAX
00660656  74 6D                     JZ 0x006606c5
00660658  8B C8                     MOV ECX,EAX
0066065A  E8 56 27 DA FF            CALL 0x00402db5
0066065F  8B F8                     MOV EDI,EAX
00660661  85 FF                     TEST EDI,EDI
00660663  75 09                     JNZ 0x0066066e
00660665  A1 0C 00 00 00            MOV EAX,[0x0000000c]
0066066A  85 C0                     TEST EAX,EAX
0066066C  76 57                     JBE 0x006606c5
LAB_0066066e:
0066066E  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
00660672  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00660679  66 3D FE FF               CMP AX,0xfffe
0066067D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00660680  74 39                     JZ 0x006606bb
00660682  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660688  85 C9                     TEST ECX,ECX
0066068A  74 2F                     JZ 0x006606bb
0066068C  50                        PUSH EAX
0066068D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00660690  50                        PUSH EAX
00660691  E8 63 56 DA FF            CALL 0x00405cf9
00660696  85 C0                     TEST EAX,EAX
00660698  74 21                     JZ 0x006606bb
0066069A  8B 10                     MOV EDX,dword ptr [EAX]
0066069C  8D 4D EC                  LEA ECX,[EBP + -0x14]
0066069F  51                        PUSH ECX
006606A0  6A 05                     PUSH 0x5
006606A2  8B C8                     MOV ECX,EAX
006606A4  FF 52 08                  CALL dword ptr [EDX + 0x8]
006606A7  85 FF                     TEST EDI,EDI
006606A9  74 06                     JZ 0x006606b1
006606AB  57                        PUSH EDI
006606AC  E8 5F DA 04 00            CALL 0x006ae110
LAB_006606b1:
006606B1  5F                        POP EDI
006606B2  33 C0                     XOR EAX,EAX
006606B4  5E                        POP ESI
006606B5  8B E5                     MOV ESP,EBP
006606B7  5D                        POP EBP
006606B8  C2 08 00                  RET 0x8
LAB_006606bb:
006606BB  85 FF                     TEST EDI,EDI
006606BD  74 06                     JZ 0x006606c5
006606BF  57                        PUSH EDI
006606C0  E8 4B DA 04 00            CALL 0x006ae110
LAB_006606c5:
006606C5  5F                        POP EDI
006606C6  83 C8 FF                  OR EAX,0xffffffff
006606C9  5E                        POP ESI
006606CA  8B E5                     MOV ESP,EBP
006606CC  5D                        POP EBP
006606CD  C2 08 00                  RET 0x8
