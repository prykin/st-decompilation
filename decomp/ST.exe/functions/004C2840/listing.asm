FUN_004c2840:
004C2840  55                        PUSH EBP
004C2841  8B EC                     MOV EBP,ESP
004C2843  56                        PUSH ESI
004C2844  8B F1                     MOV ESI,ECX
004C2846  57                        PUSH EDI
004C2847  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C284A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004C284D  89 07                     MOV dword ptr [EDI],EAX
004C284F  8B 8E AC 05 00 00         MOV ECX,dword ptr [ESI + 0x5ac]
004C2855  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
004C2858  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004C285E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C2864  52                        PUSH EDX
004C2865  E8 4D 21 F4 FF            CALL 0x004049b7
004C286A  88 47 08                  MOV byte ptr [EDI + 0x8],AL
004C286D  81 C6 C4 05 00 00         ADD ESI,0x5c4
004C2873  6A 0E                     PUSH 0xe
004C2875  83 C7 09                  ADD EDI,0x9
004C2878  56                        PUSH ESI
004C2879  57                        PUSH EDI
004C287A  E8 C1 BA 26 00            CALL 0x0072e340
004C287F  83 C4 0C                  ADD ESP,0xc
004C2882  5F                        POP EDI
004C2883  5E                        POP ESI
004C2884  5D                        POP EBP
004C2885  C2 04 00                  RET 0x4
