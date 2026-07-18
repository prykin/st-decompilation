FUN_0060a800:
0060A800  55                        PUSH EBP
0060A801  8B EC                     MOV EBP,ESP
0060A803  83 EC 08                  SUB ESP,0x8
0060A806  53                        PUSH EBX
0060A807  8B D9                     MOV EBX,ECX
0060A809  57                        PUSH EDI
0060A80A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0060A80D  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
0060A813  85 C0                     TEST EAX,EAX
0060A815  0F 84 D3 00 00 00         JZ 0x0060a8ee
0060A81B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0060A81E  33 FF                     XOR EDI,EDI
0060A820  85 D2                     TEST EDX,EDX
0060A822  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0060A825  0F 8E C3 00 00 00         JLE 0x0060a8ee
0060A82B  56                        PUSH ESI
0060A82C  EB 03                     JMP 0x0060a831
LAB_0060a82e:
0060A82E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0060a831:
0060A831  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
0060A837  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0060A83A  0F 83 A1 00 00 00         JNC 0x0060a8e1
0060A840  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060A843  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0060A846  0F AF F7                  IMUL ESI,EDI
0060A849  03 F1                     ADD ESI,ECX
0060A84B  85 F6                     TEST ESI,ESI
0060A84D  0F 84 8E 00 00 00         JZ 0x0060a8e1
0060A853  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0060A856  85 C9                     TEST ECX,ECX
0060A858  0F 8C 83 00 00 00         JL 0x0060a8e1
0060A85E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060A861  85 C0                     TEST EAX,EAX
0060A863  74 67                     JZ 0x0060a8cc
0060A865  8B C2                     MOV EAX,EDX
0060A867  99                        CDQ
0060A868  F7 BB 1D 02 00 00         IDIV dword ptr [EBX + 0x21d]
0060A86E  3B F8                     CMP EDI,EAX
0060A870  7D 34                     JGE 0x0060a8a6
0060A872  8B C7                     MOV EAX,EDI
0060A874  BB 03 00 00 00            MOV EBX,0x3
0060A879  99                        CDQ
0060A87A  F7 FB                     IDIV EBX
0060A87C  85 D2                     TEST EDX,EDX
0060A87E  74 61                     JZ 0x0060a8e1
0060A880  51                        PUSH ECX
0060A881  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A887  E8 D4 02 0E 00            CALL 0x006eab60
0060A88C  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060A88F  83 CB FF                  OR EBX,0xffffffff
0060A892  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
0060A895  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A89B  50                        PUSH EAX
0060A89C  E8 FF E2 0D 00            CALL 0x006e8ba0
0060A8A1  89 5E 3C                  MOV dword ptr [ESI + 0x3c],EBX
0060A8A4  EB 3B                     JMP 0x0060a8e1
LAB_0060a8a6:
0060A8A6  51                        PUSH ECX
0060A8A7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A8AD  E8 AE 02 0E 00            CALL 0x006eab60
0060A8B2  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0060A8B5  83 CB FF                  OR EBX,0xffffffff
0060A8B8  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
0060A8BB  51                        PUSH ECX
0060A8BC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A8C2  E8 D9 E2 0D 00            CALL 0x006e8ba0
0060A8C7  89 5E 3C                  MOV dword ptr [ESI + 0x3c],EBX
0060A8CA  EB 15                     JMP 0x0060a8e1
LAB_0060a8cc:
0060A8CC  6A 00                     PUSH 0x0
0060A8CE  51                        PUSH ECX
0060A8CF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A8D5  E8 C6 01 0E 00            CALL 0x006eaaa0
0060A8DA  C7 46 04 01 00 00 00      MOV dword ptr [ESI + 0x4],0x1
LAB_0060a8e1:
0060A8E1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0060A8E4  47                        INC EDI
0060A8E5  3B FA                     CMP EDI,EDX
0060A8E7  0F 8C 41 FF FF FF         JL 0x0060a82e
0060A8ED  5E                        POP ESI
LAB_0060a8ee:
0060A8EE  5F                        POP EDI
0060A8EF  5B                        POP EBX
0060A8F0  8B E5                     MOV ESP,EBP
0060A8F2  5D                        POP EBP
0060A8F3  C2 04 00                  RET 0x4
