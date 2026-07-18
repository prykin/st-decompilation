FUN_006a2770:
006A2770  55                        PUSH EBP
006A2771  8B EC                     MOV EBP,ESP
006A2773  51                        PUSH ECX
006A2774  53                        PUSH EBX
006A2775  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A2778  85 DB                     TEST EBX,EBX
006A277A  0F 8C 2C 01 00 00         JL 0x006a28ac
006A2780  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A2783  3B 1A                     CMP EBX,dword ptr [EDX]
006A2785  0F 8D 21 01 00 00         JGE 0x006a28ac
006A278B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A278E  85 C9                     TEST ECX,ECX
006A2790  0F 8C 16 01 00 00         JL 0x006a28ac
006A2796  3B 4A 04                  CMP ECX,dword ptr [EDX + 0x4]
006A2799  0F 8D 0D 01 00 00         JGE 0x006a28ac
006A279F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A27A2  85 C0                     TEST EAX,EAX
006A27A4  0F 8C 02 01 00 00         JL 0x006a28ac
006A27AA  83 F8 06                  CMP EAX,0x6
006A27AD  0F 8D F9 00 00 00         JGE 0x006a28ac
006A27B3  B8 6C F8 7D 00            MOV EAX,0x7df86c
006A27B8  56                        PUSH ESI
006A27B9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A27BC  57                        PUSH EDI
006A27BD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A27C0  EB 0C                     JMP 0x006a27ce
LAB_006a27c2:
006A27C2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A27C5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A27C8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A27CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006a27ce:
006A27CE  8B 78 FC                  MOV EDI,dword ptr [EAX + -0x4]
006A27D1  03 FB                     ADD EDI,EBX
006A27D3  8B 18                     MOV EBX,dword ptr [EAX]
006A27D5  03 D9                     ADD EBX,ECX
006A27D7  85 FF                     TEST EDI,EDI
006A27D9  7C 0D                     JL 0x006a27e8
006A27DB  3B 3A                     CMP EDI,dword ptr [EDX]
006A27DD  7D 09                     JGE 0x006a27e8
006A27DF  85 DB                     TEST EBX,EBX
006A27E1  7C 05                     JL 0x006a27e8
006A27E3  3B 5A 04                  CMP EBX,dword ptr [EDX + 0x4]
006A27E6  7C 1D                     JL 0x006a2805
LAB_006a27e8:
006A27E8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006A27ED  68 FF 02 00 00            PUSH 0x2ff
006A27F2  68 6C FA 7D 00            PUSH 0x7dfa6c
006A27F7  50                        PUSH EAX
006A27F8  68 21 05 00 00            PUSH 0x521
006A27FD  E8 3E 36 00 00            CALL 0x006a5e40
006A2802  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006a2805:
006A2805  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A2808  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A280B  51                        PUSH ECX
006A280C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A280F  50                        PUSH EAX
006A2810  56                        PUSH ESI
006A2811  51                        PUSH ECX
006A2812  53                        PUSH EBX
006A2813  57                        PUSH EDI
006A2814  52                        PUSH EDX
006A2815  E8 99 02 D6 FF            CALL 0x00402ab3
006A281A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A281D  83 C4 1C                  ADD ESP,0x1c
006A2820  83 C0 08                  ADD EAX,0x8
006A2823  3D 8C F8 7D 00            CMP EAX,0x7df88c
006A2828  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A282B  7C 95                     JL 0x006a27c2
006A282D  C7 45 18 88 F8 7D 00      MOV dword ptr [EBP + 0x18],0x7df888
006A2834  BF 6C F8 7D 00            MOV EDI,0x7df86c
LAB_006a2839:
006A2839  8B 47 FC                  MOV EAX,dword ptr [EDI + -0x4]
006A283C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A283F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A2842  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A2845  03 C1                     ADD EAX,ECX
006A2847  8B 0F                     MOV ECX,dword ptr [EDI]
006A2849  03 CB                     ADD ECX,EBX
006A284B  8A 5E 04                  MOV BL,byte ptr [ESI + 0x4]
006A284E  32 1A                     XOR BL,byte ptr [EDX]
006A2850  66 8B 56 04               MOV DX,word ptr [ESI + 0x4]
006A2854  83 E3 0F                  AND EBX,0xf
006A2857  33 DA                     XOR EBX,EDX
006A2859  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A285C  66 89 5E 04               MOV word ptr [ESI + 0x4],BX
006A2860  8A 1E                     MOV BL,byte ptr [ESI]
006A2862  32 1A                     XOR BL,byte ptr [EDX]
006A2864  66 8B 16                  MOV DX,word ptr [ESI]
006A2867  83 E3 0F                  AND EBX,0xf
006A286A  33 DA                     XOR EBX,EDX
006A286C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A286F  52                        PUSH EDX
006A2870  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A2873  52                        PUSH EDX
006A2874  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A2877  56                        PUSH ESI
006A2878  68 FF 00 00 00            PUSH 0xff
006A287D  52                        PUSH EDX
006A287E  51                        PUSH ECX
006A287F  50                        PUSH EAX
006A2880  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2883  50                        PUSH EAX
006A2884  66 89 1E                  MOV word ptr [ESI],BX
006A2887  E8 69 24 D6 FF            CALL 0x00404cf5
006A288C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A288F  83 C7 08                  ADD EDI,0x8
006A2892  83 C4 20                  ADD ESP,0x20
006A2895  83 C1 04                  ADD ECX,0x4
006A2898  81 FF 8C F8 7D 00         CMP EDI,0x7df88c
006A289E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006A28A1  7C 96                     JL 0x006a2839
006A28A3  5F                        POP EDI
006A28A4  5E                        POP ESI
006A28A5  33 C0                     XOR EAX,EAX
006A28A7  5B                        POP EBX
006A28A8  8B E5                     MOV ESP,EBP
006A28AA  5D                        POP EBP
006A28AB  C3                        RET
LAB_006a28ac:
006A28AC  B8 01 00 00 00            MOV EAX,0x1
006A28B1  5B                        POP EBX
006A28B2  8B E5                     MOV ESP,EBP
006A28B4  5D                        POP EBP
006A28B5  C3                        RET
