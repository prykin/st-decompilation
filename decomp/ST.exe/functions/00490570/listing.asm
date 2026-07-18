FUN_00490570:
00490570  55                        PUSH EBP
00490571  8B EC                     MOV EBP,ESP
00490573  51                        PUSH ECX
00490574  53                        PUSH EBX
00490575  56                        PUSH ESI
00490576  66 8B 71 4B               MOV SI,word ptr [ECX + 0x4b]
0049057A  57                        PUSH EDI
0049057B  66 85 F6                  TEST SI,SI
0049057E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00490581  0F 8E 5A 01 00 00         JLE 0x004906e1
00490587  66 8B 41 47               MOV AX,word ptr [ECX + 0x47]
0049058B  66 8B 51 49               MOV DX,word ptr [ECX + 0x49]
0049058F  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00490596  66 85 C0                  TEST AX,AX
00490599  7C 57                     JL 0x004905f2
0049059B  66 3B C7                  CMP AX,DI
0049059E  7D 52                     JGE 0x004905f2
004905A0  66 85 D2                  TEST DX,DX
004905A3  7C 4D                     JL 0x004905f2
004905A5  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004905AC  7D 44                     JGE 0x004905f2
004905AE  66 85 F6                  TEST SI,SI
004905B1  7C 3F                     JL 0x004905f2
004905B3  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004905BA  7D 36                     JGE 0x004905f2
004905BC  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004905C3  0F BF DE                  MOVSX EBX,SI
004905C6  0F AF CB                  IMUL ECX,EBX
004905C9  0F BF FF                  MOVSX EDI,DI
004905CC  0F BF DA                  MOVSX EBX,DX
004905CF  0F AF FB                  IMUL EDI,EBX
004905D2  03 CF                     ADD ECX,EDI
004905D4  0F BF F8                  MOVSX EDI,AX
004905D7  03 CF                     ADD ECX,EDI
004905D9  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004905DF  8B 5C CF 04               MOV EBX,dword ptr [EDI + ECX*0x8 + 0x4]
004905E3  85 DB                     TEST EBX,EBX
004905E5  0F 85 5F 01 00 00         JNZ 0x0049074a
004905EB  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_004905f2:
004905F2  66 85 C0                  TEST AX,AX
004905F5  8D 4E FF                  LEA ECX,[ESI + -0x1]
004905F8  0F 8C DA 00 00 00         JL 0x004906d8
004905FE  66 3B C7                  CMP AX,DI
00490601  0F 8D 80 00 00 00         JGE 0x00490687
00490607  66 85 D2                  TEST DX,DX
0049060A  7C 7B                     JL 0x00490687
0049060C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00490613  7D 72                     JGE 0x00490687
00490615  66 85 C9                  TEST CX,CX
00490618  7C 6D                     JL 0x00490687
0049061A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00490621  7D 64                     JGE 0x00490687
00490623  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0049062A  0F BF D9                  MOVSX EBX,CX
0049062D  0F AF F3                  IMUL ESI,EBX
00490630  0F BF FF                  MOVSX EDI,DI
00490633  0F BF DA                  MOVSX EBX,DX
00490636  0F AF FB                  IMUL EDI,EBX
00490639  03 F7                     ADD ESI,EDI
0049063B  0F BF F8                  MOVSX EDI,AX
0049063E  03 F7                     ADD ESI,EDI
00490640  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00490646  83 3C F7 00               CMP dword ptr [EDI + ESI*0x8],0x0
0049064A  74 34                     JZ 0x00490680
0049064C  0F BF 75 FC               MOVSX ESI,word ptr [EBP + -0x4]
00490650  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
00490657  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
0049065E  4E                        DEC ESI
0049065F  0F AF F7                  IMUL ESI,EDI
00490662  0F BF FA                  MOVSX EDI,DX
00490665  0F AF FB                  IMUL EDI,EBX
00490668  03 F7                     ADD ESI,EDI
0049066A  0F BF F8                  MOVSX EDI,AX
0049066D  03 F7                     ADD ESI,EDI
0049066F  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
00490675  66 83 3C 77 00            CMP word ptr [EDI + ESI*0x2],0x0
0049067A  0F 85 CA 00 00 00         JNZ 0x0049074a
LAB_00490680:
00490680  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_00490687:
00490687  66 85 C0                  TEST AX,AX
0049068A  7C 4C                     JL 0x004906d8
0049068C  66 3B C7                  CMP AX,DI
0049068F  7D 47                     JGE 0x004906d8
00490691  66 85 D2                  TEST DX,DX
00490694  7C 42                     JL 0x004906d8
00490696  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049069D  7D 39                     JGE 0x004906d8
0049069F  66 85 C9                  TEST CX,CX
004906A2  7C 34                     JL 0x004906d8
004906A4  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004906AB  7D 2B                     JGE 0x004906d8
004906AD  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004906B4  0F BF C9                  MOVSX ECX,CX
004906B7  0F AF F1                  IMUL ESI,ECX
004906BA  0F BF CF                  MOVSX ECX,DI
004906BD  0F BF D2                  MOVSX EDX,DX
004906C0  0F AF CA                  IMUL ECX,EDX
004906C3  0F BF C0                  MOVSX EAX,AX
004906C6  03 F1                     ADD ESI,ECX
004906C8  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004906CE  03 F0                     ADD ESI,EAX
004906D0  8B 44 F1 04               MOV EAX,dword ptr [ECX + ESI*0x8 + 0x4]
004906D4  85 C0                     TEST EAX,EAX
004906D6  75 72                     JNZ 0x0049074a
LAB_004906d8:
004906D8  5F                        POP EDI
004906D9  5E                        POP ESI
004906DA  33 C0                     XOR EAX,EAX
004906DC  5B                        POP EBX
004906DD  8B E5                     MOV ESP,EBP
004906DF  5D                        POP EBP
004906E0  C3                        RET
LAB_004906e1:
004906E1  66 8B 41 49               MOV AX,word ptr [ECX + 0x49]
004906E5  66 8B 49 47               MOV CX,word ptr [ECX + 0x47]
004906E9  66 85 C9                  TEST CX,CX
004906EC  7C 53                     JL 0x00490741
004906EE  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004906F5  66 3B CA                  CMP CX,DX
004906F8  7D 47                     JGE 0x00490741
004906FA  66 85 C0                  TEST AX,AX
004906FD  7C 42                     JL 0x00490741
004906FF  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
00490706  7D 39                     JGE 0x00490741
00490708  66 85 F6                  TEST SI,SI
0049070B  7C 34                     JL 0x00490741
0049070D  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
00490714  7D 2B                     JGE 0x00490741
00490716  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0049071D  0F BF F6                  MOVSX ESI,SI
00490720  0F BF D2                  MOVSX EDX,DX
00490723  0F AF FE                  IMUL EDI,ESI
00490726  0F BF C0                  MOVSX EAX,AX
00490729  0F AF D0                  IMUL EDX,EAX
0049072C  0F BF C9                  MOVSX ECX,CX
0049072F  03 FA                     ADD EDI,EDX
00490731  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00490737  03 F9                     ADD EDI,ECX
00490739  8B 44 FA 04               MOV EAX,dword ptr [EDX + EDI*0x8 + 0x4]
0049073D  85 C0                     TEST EAX,EAX
0049073F  75 09                     JNZ 0x0049074a
LAB_00490741:
00490741  5F                        POP EDI
00490742  5E                        POP ESI
00490743  33 C0                     XOR EAX,EAX
00490745  5B                        POP EBX
00490746  8B E5                     MOV ESP,EBP
00490748  5D                        POP EBP
00490749  C3                        RET
LAB_0049074a:
0049074A  5F                        POP EDI
0049074B  5E                        POP ESI
0049074C  B8 01 00 00 00            MOV EAX,0x1
00490751  5B                        POP EBX
00490752  8B E5                     MOV ESP,EBP
00490754  5D                        POP EBP
00490755  C3                        RET
