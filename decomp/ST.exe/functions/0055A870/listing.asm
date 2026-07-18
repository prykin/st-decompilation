FUN_0055a870:
0055A870  55                        PUSH EBP
0055A871  8B EC                     MOV EBP,ESP
0055A873  51                        PUSH ECX
0055A874  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055A87A  53                        PUSH EBX
0055A87B  56                        PUSH ESI
0055A87C  57                        PUSH EDI
0055A87D  85 C0                     TEST EAX,EAX
0055A87F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055A882  0F 84 E7 00 00 00         JZ 0x0055a96f
0055A888  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A88B  85 F6                     TEST ESI,ESI
0055A88D  0F 8C DC 00 00 00         JL 0x0055a96f
0055A893  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055A896  83 F8 08                  CMP EAX,0x8
0055A899  0F 83 D0 00 00 00         JNC 0x0055a96f
0055A89F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0055A8A5  85 D2                     TEST EDX,EDX
0055A8A7  74 11                     JZ 0x0055a8ba
0055A8A9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0055A8AC  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
0055A8B4  0F 83 B5 00 00 00         JNC 0x0055a96f
LAB_0055a8ba:
0055A8BA  8B 94 81 D4 00 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd4]
0055A8C1  85 D2                     TEST EDX,EDX
0055A8C3  0F 84 A6 00 00 00         JZ 0x0055a96f
0055A8C9  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0055A8CC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055A8CF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055A8D2  52                        PUSH EDX
0055A8D3  56                        PUSH ESI
0055A8D4  50                        PUSH EAX
0055A8D5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A8D8  50                        PUSH EAX
0055A8D9  57                        PUSH EDI
0055A8DA  53                        PUSH EBX
0055A8DB  6A 06                     PUSH 0x6
0055A8DD  E8 03 73 EA FF            CALL 0x00401be5
0055A8E2  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
0055A8E6  2B DE                     SUB EBX,ESI
0055A8E8  56                        PUSH ESI
0055A8E9  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0055A8EC  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0055A8EF  2B FE                     SUB EDI,ESI
0055A8F1  E8 C9 7F EA FF            CALL 0x004028bf
0055A8F6  8B C8                     MOV ECX,EAX
0055A8F8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0055A8FB  83 C4 04                  ADD ESP,0x4
0055A8FE  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0055A901  85 C0                     TEST EAX,EAX
0055A903  7E 6A                     JLE 0x0055a96f
0055A905  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0055A908  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0055a90b:
0055A90B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055A90E  33 C0                     XOR EAX,EAX
LAB_0055a910:
0055A910  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055A913  85 C9                     TEST ECX,ECX
0055A915  74 09                     JZ 0x0055a920
0055A917  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A91A  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
0055A91E  74 34                     JZ 0x0055a954
LAB_0055a920:
0055A920  85 F6                     TEST ESI,ESI
0055A922  7C 30                     JL 0x0055a954
0055A924  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A927  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
0055A92A  3B F1                     CMP ESI,ECX
0055A92C  7D 26                     JGE 0x0055a954
0055A92E  85 FF                     TEST EDI,EDI
0055A930  7C 22                     JL 0x0055a954
0055A932  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
0055A935  7D 1D                     JGE 0x0055a954
0055A937  8B DF                     MOV EBX,EDI
0055A939  0F AF D9                  IMUL EBX,ECX
0055A93C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A93F  03 9C 8A D4 00 00 00      ADD EBX,dword ptr [EDX + ECX*0x4 + 0xd4]
0055A946  8A 0C 33                  MOV CL,byte ptr [EBX + ESI*0x1]
0055A949  84 C9                     TEST CL,CL
0055A94B  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
0055A94E  76 04                     JBE 0x0055a954
0055A950  FE C9                     DEC CL
0055A952  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a954:
0055A954  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0055A957  40                        INC EAX
0055A958  46                        INC ESI
0055A959  3B C1                     CMP EAX,ECX
0055A95B  7C B3                     JL 0x0055a910
0055A95D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A960  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A963  03 D1                     ADD EDX,ECX
0055A965  47                        INC EDI
0055A966  48                        DEC EAX
0055A967  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0055A96A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0055A96D  75 9C                     JNZ 0x0055a90b
LAB_0055a96f:
0055A96F  5F                        POP EDI
0055A970  5E                        POP ESI
0055A971  5B                        POP EBX
0055A972  8B E5                     MOV ESP,EBP
0055A974  5D                        POP EBP
0055A975  C2 18 00                  RET 0x18
