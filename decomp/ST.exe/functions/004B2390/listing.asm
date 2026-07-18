FUN_004b2390:
004B2390  55                        PUSH EBP
004B2391  8B EC                     MOV EBP,ESP
004B2393  51                        PUSH ECX
004B2394  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B2397  53                        PUSH EBX
004B2398  56                        PUSH ESI
004B2399  57                        PUSH EDI
004B239A  85 D2                     TEST EDX,EDX
004B239C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004B23A3  0F 8C 1E 01 00 00         JL 0x004b24c7
004B23A9  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004B23B0  0F BF CF                  MOVSX ECX,DI
004B23B3  3B D1                     CMP EDX,ECX
004B23B5  0F 8D 0C 01 00 00         JGE 0x004b24c7
004B23BB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B23BE  85 C0                     TEST EAX,EAX
004B23C0  0F 8C 01 01 00 00         JL 0x004b24c7
004B23C6  66 8B 1D 42 B2 7F 00      MOV BX,word ptr [0x007fb242]
004B23CD  0F BF F3                  MOVSX ESI,BX
004B23D0  3B C6                     CMP EAX,ESI
004B23D2  0F 8D EF 00 00 00         JGE 0x004b24c7
004B23D8  66 85 D2                  TEST DX,DX
004B23DB  0F 8C DC 00 00 00         JL 0x004b24bd
004B23E1  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004B23E4  66 3B D7                  CMP DX,DI
004B23E7  7D 50                     JGE 0x004b2439
004B23E9  66 85 C0                  TEST AX,AX
004B23EC  7C 4B                     JL 0x004b2439
004B23EE  66 3B C3                  CMP AX,BX
004B23F1  7D 46                     JGE 0x004b2439
004B23F3  66 85 F6                  TEST SI,SI
004B23F6  7C 41                     JL 0x004b2439
004B23F8  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004B23FF  7D 38                     JGE 0x004b2439
004B2401  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B2408  0F BF DE                  MOVSX EBX,SI
004B240B  0F AF FB                  IMUL EDI,EBX
004B240E  0F BF D8                  MOVSX EBX,AX
004B2411  0F AF D9                  IMUL EBX,ECX
004B2414  0F BF CA                  MOVSX ECX,DX
004B2417  03 FB                     ADD EDI,EBX
004B2419  03 F9                     ADD EDI,ECX
004B241B  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004B2421  83 3C F9 00               CMP dword ptr [ECX + EDI*0x8],0x0
004B2425  0F 85 92 00 00 00         JNZ 0x004b24bd
004B242B  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004B2432  66 8B 1D 42 B2 7F 00      MOV BX,word ptr [0x007fb242]
LAB_004b2439:
004B2439  66 3B D7                  CMP DX,DI
004B243C  7D 7F                     JGE 0x004b24bd
004B243E  66 85 C0                  TEST AX,AX
004B2441  7C 7A                     JL 0x004b24bd
004B2443  66 3B C3                  CMP AX,BX
004B2446  7D 75                     JGE 0x004b24bd
004B2448  66 85 F6                  TEST SI,SI
004B244B  7C 70                     JL 0x004b24bd
004B244D  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004B2454  7D 67                     JGE 0x004b24bd
004B2456  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
004B245D  0F BF F8                  MOVSX EDI,AX
004B2460  0F AF CF                  IMUL ECX,EDI
004B2463  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
004B246A  0F BF DE                  MOVSX EBX,SI
004B246D  0F AF FB                  IMUL EDI,EBX
004B2470  03 CF                     ADD ECX,EDI
004B2472  0F BF FA                  MOVSX EDI,DX
004B2475  03 CF                     ADD ECX,EDI
004B2477  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
004B247D  0F BF 0C 4F               MOVSX ECX,word ptr [EDI + ECX*0x2]
004B2481  85 C9                     TEST ECX,ECX
004B2483  75 38                     JNZ 0x004b24bd
004B2485  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004B2488  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
004B248F  85 C9                     TEST ECX,ECX
004B2491  74 2A                     JZ 0x004b24bd
004B2493  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
004B2499  85 C9                     TEST ECX,ECX
004B249B  74 20                     JZ 0x004b24bd
004B249D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B24A0  57                        PUSH EDI
004B24A1  56                        PUSH ESI
004B24A2  50                        PUSH EAX
004B24A3  52                        PUSH EDX
004B24A4  E8 FB 2D F5 FF            CALL 0x004052a4
004B24A9  85 C0                     TEST EAX,EAX
004B24AB  74 10                     JZ 0x004b24bd
004B24AD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B24B0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004B24B7  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
LAB_004b24bd:
004B24BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B24C0  5F                        POP EDI
004B24C1  5E                        POP ESI
004B24C2  5B                        POP EBX
004B24C3  8B E5                     MOV ESP,EBP
004B24C5  5D                        POP EBP
004B24C6  C3                        RET
LAB_004b24c7:
004B24C7  5F                        POP EDI
004B24C8  5E                        POP ESI
004B24C9  33 C0                     XOR EAX,EAX
004B24CB  5B                        POP EBX
004B24CC  8B E5                     MOV ESP,EBP
004B24CE  5D                        POP EBP
004B24CF  C3                        RET
