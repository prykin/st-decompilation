FUN_004c84c0:
004C84C0  55                        PUSH EBP
004C84C1  8B EC                     MOV EBP,ESP
004C84C3  83 EC 1C                  SUB ESP,0x1c
004C84C6  53                        PUSH EBX
004C84C7  8B D9                     MOV EBX,ECX
004C84C9  56                        PUSH ESI
004C84CA  57                        PUSH EDI
004C84CB  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C84D1  33 FF                     XOR EDI,EDI
004C84D3  3B C7                     CMP EAX,EDI
004C84D5  0F 84 84 08 00 00         JZ 0x004c8d5f
004C84DB  83 F8 05                  CMP EAX,0x5
004C84DE  75 0A                     JNZ 0x004c84ea
004C84E0  8B 03                     MOV EAX,dword ptr [EBX]
004C84E2  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
004C84E5  83 F8 64                  CMP EAX,0x64
004C84E8  74 0D                     JZ 0x004c84f7
LAB_004c84ea:
004C84EA  83 BB 94 03 00 00 64      CMP dword ptr [EBX + 0x394],0x64
004C84F1  0F 8C 12 01 00 00         JL 0x004c8609
LAB_004c84f7:
004C84F7  8B CB                     MOV ECX,EBX
004C84F9  E8 81 B1 F3 FF            CALL 0x0040367f
004C84FE  85 C0                     TEST EAX,EAX
004C8500  0F 84 04 09 00 00         JZ 0x004c8e0a
004C8506  8B 8B 6D 03 00 00         MOV ECX,dword ptr [EBX + 0x36d]
004C850C  49                        DEC ECX
004C850D  8B C1                     MOV EAX,ECX
004C850F  89 8B 6D 03 00 00         MOV dword ptr [EBX + 0x36d],ECX
004C8515  3B C7                     CMP EAX,EDI
004C8517  0F 8E 9C 00 00 00         JLE 0x004c85b9
004C851D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C8523  8D 83 A4 03 00 00         LEA EAX,[EBX + 0x3a4]
004C8529  50                        PUSH EAX
004C852A  8D 83 98 03 00 00         LEA EAX,[EBX + 0x398]
004C8530  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C8536  8D 8B A0 03 00 00         LEA ECX,[EBX + 0x3a0]
004C853C  89 93 8C 03 00 00         MOV dword ptr [EBX + 0x38c],EDX
004C8542  8D 93 9C 03 00 00         LEA EDX,[EBX + 0x39c]
004C8548  51                        PUSH ECX
004C8549  8B 8B 69 03 00 00         MOV ECX,dword ptr [EBX + 0x369]
004C854F  52                        PUSH EDX
004C8550  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8556  50                        PUSH EAX
004C8557  51                        PUSH ECX
004C8558  52                        PUSH EDX
004C8559  8B CB                     MOV ECX,EBX
004C855B  89 BB 94 03 00 00         MOV dword ptr [EBX + 0x394],EDI
004C8561  E8 79 B0 F3 FF            CALL 0x004035df
004C8566  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004C856C  89 BB A8 03 00 00         MOV dword ptr [EBX + 0x3a8],EDI
004C8572  83 C0 CE                  ADD EAX,-0x32
004C8575  89 BB AC 03 00 00         MOV dword ptr [EBX + 0x3ac],EDI
004C857B  83 F8 2A                  CMP EAX,0x2a
004C857E  89 BB B0 03 00 00         MOV dword ptr [EBX + 0x3b0],EDI
004C8584  89 BB B4 03 00 00         MOV dword ptr [EBX + 0x3b4],EDI
004C858A  77 1D                     JA 0x004c85a9
004C858C  33 C9                     XOR ECX,ECX
004C858E  8A 88 1C 8E 4C 00         MOV CL,byte ptr [EAX + 0x4c8e1c]
switchD_004c8594::switchD:
004C8594  FF 24 8D 14 8E 4C 00      JMP dword ptr [ECX*0x4 + 0x4c8e14]
switchD_004c8594::caseD_32:
004C859B  8B CB                     MOV ECX,EBX
004C859D  E8 06 B5 F3 FF            CALL 0x00403aa8
004C85A2  8B CB                     MOV ECX,EBX
004C85A4  E8 31 D3 F3 FF            CALL 0x004058da
switchD_004c8594::caseD_33:
004C85A9  8B CB                     MOV ECX,EBX
004C85AB  E8 7E D4 F3 FF            CALL 0x00405a2e
004C85B0  5F                        POP EDI
004C85B1  5E                        POP ESI
004C85B2  33 C0                     XOR EAX,EAX
004C85B4  5B                        POP EBX
004C85B5  8B E5                     MOV ESP,EBP
004C85B7  5D                        POP EBP
004C85B8  C3                        RET
LAB_004c85b9:
004C85B9  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C85BF  8B CB                     MOV ECX,EBX
004C85C1  89 93 65 03 00 00         MOV dword ptr [EBX + 0x365],EDX
004C85C7  E8 9E C5 F3 FF            CALL 0x00404b6a
004C85CC  85 C0                     TEST EAX,EAX
004C85CE  75 23                     JNZ 0x004c85f3
004C85D0  68 DC D3 7A 00            PUSH 0x7ad3dc
004C85D5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C85DA  57                        PUSH EDI
004C85DB  57                        PUSH EDI
004C85DC  68 9F 01 00 00            PUSH 0x19f
004C85E1  68 B4 D3 7A 00            PUSH 0x7ad3b4
004C85E6  E8 E5 4E 1E 00            CALL 0x006ad4d0
004C85EB  83 C4 18                  ADD ESP,0x18
004C85EE  85 C0                     TEST EAX,EAX
004C85F0  74 01                     JZ 0x004c85f3
004C85F2  CC                        INT3
LAB_004c85f3:
004C85F3  8B CB                     MOV ECX,EBX
004C85F5  89 BB 6D 03 00 00         MOV dword ptr [EBX + 0x36d],EDI
004C85FB  E8 2E D4 F3 FF            CALL 0x00405a2e
004C8600  5F                        POP EDI
004C8601  5E                        POP ESI
004C8602  33 C0                     XOR EAX,EAX
004C8604  5B                        POP EBX
004C8605  8B E5                     MOV ESP,EBP
004C8607  5D                        POP EBP
004C8608  C3                        RET
LAB_004c8609:
004C8609  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C860F  83 F8 05                  CMP EAX,0x5
004C8612  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C8617  0F 85 2A 02 00 00         JNZ 0x004c8847
004C861D  F7 A3 90 03 00 00         MUL dword ptr [EBX + 0x390]
004C8623  C1 EA 05                  SHR EDX,0x5
004C8626  75 05                     JNZ 0x004c862d
004C8628  BA 01 00 00 00            MOV EDX,0x1
LAB_004c862d:
004C862D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C8632  8B 8B 8C 03 00 00         MOV ECX,dword ptr [EBX + 0x38c]
004C8638  03 CA                     ADD ECX,EDX
004C863A  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004C8640  3B C1                     CMP EAX,ECX
004C8642  0F 82 C2 07 00 00         JC 0x004c8e0a
004C8648  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
004C864E  89 83 8C 03 00 00         MOV dword ptr [EBX + 0x38c],EAX
004C8654  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C865A  89 BB C0 03 00 00         MOV dword ptr [EBX + 0x3c0],EDI
004C8660  89 BB C8 03 00 00         MOV dword ptr [EBX + 0x3c8],EDI
004C8666  89 BB C4 03 00 00         MOV dword ptr [EBX + 0x3c4],EDI
004C866C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C866F  89 BB BC 03 00 00         MOV dword ptr [EBX + 0x3bc],EDI
004C8675  03 D1                     ADD EDX,ECX
004C8677  89 BB B8 03 00 00         MOV dword ptr [EBX + 0x3b8],EDI
004C867D  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C8682  8B 0C 95 F0 29 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e29f0]
004C8689  F7 E9                     IMUL ECX
004C868B  C1 FA 05                  SAR EDX,0x5
004C868E  8B C2                     MOV EAX,EDX
004C8690  C1 E8 1F                  SHR EAX,0x1f
004C8693  03 D0                     ADD EDX,EAX
004C8695  3B CF                     CMP ECX,EDI
004C8697  8B F2                     MOV ESI,EDX
004C8699  74 0B                     JZ 0x004c86a6
004C869B  3B F7                     CMP ESI,EDI
004C869D  75 0B                     JNZ 0x004c86aa
004C869F  BE 01 00 00 00            MOV ESI,0x1
004C86A4  EB 04                     JMP 0x004c86aa
LAB_004c86a6:
004C86A6  3B F7                     CMP ESI,EDI
004C86A8  74 4B                     JZ 0x004c86f5
LAB_004c86aa:
004C86AA  8B 0D 84 4D 79 00         MOV ECX,dword ptr [0x00794d84]
004C86B0  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C86B3  51                        PUSH ECX
004C86B4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C86BA  52                        PUSH EDX
004C86BB  E8 EB 9C F3 FF            CALL 0x004023ab
004C86C0  3B C6                     CMP EAX,ESI
004C86C2  7D 0F                     JGE 0x004c86d3
004C86C4  C7 83 BC 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3bc],0x1
004C86CE  E9 33 01 00 00            JMP 0x004c8806
LAB_004c86d3:
004C86D3  8B 8B 61 03 00 00         MOV ECX,dword ptr [EBX + 0x361]
004C86D9  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004C86DC  56                        PUSH ESI
004C86DD  50                        PUSH EAX
004C86DE  8B 14 8D 70 4D 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x794d70]
004C86E5  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C86E8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C86EE  52                        PUSH EDX
004C86EF  50                        PUSH EAX
004C86F0  E8 9E A0 F3 FF            CALL 0x00402793
LAB_004c86f5:
004C86F5  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004C86F8  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C86FB  33 D2                     XOR EDX,EDX
004C86FD  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004C8703  3B C2                     CMP EAX,EDX
004C8705  75 0C                     JNZ 0x004c8713
004C8707  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C870D  50                        PUSH EAX
004C870E  E8 7A C4 F3 FF            CALL 0x00404b8d
LAB_004c8713:
004C8713  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004C8719  51                        PUSH ECX
004C871A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8720  E8 92 C2 F3 FF            CALL 0x004049b7
004C8725  8A D0                     MOV DL,AL
004C8727  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C872D  81 E2 FF 00 00 00         AND EDX,0xff
004C8733  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C8736  03 D0                     ADD EDX,EAX
004C8738  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C873D  8B 0C 95 78 41 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e4178]
004C8744  F7 E9                     IMUL ECX
004C8746  C1 FA 05                  SAR EDX,0x5
004C8749  8B CA                     MOV ECX,EDX
004C874B  C1 E9 1F                  SHR ECX,0x1f
004C874E  03 D1                     ADD EDX,ECX
004C8750  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
004C8756  03 CA                     ADD ECX,EDX
004C8758  8A 93 3D 02 00 00         MOV DL,byte ptr [EBX + 0x23d]
004C875E  89 8B 41 02 00 00         MOV dword ptr [EBX + 0x241],ECX
004C8764  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C876A  52                        PUSH EDX
004C876B  E8 47 C2 F3 FF            CALL 0x004049b7
004C8770  8A C8                     MOV CL,AL
004C8772  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C8778  81 E1 FF 00 00 00         AND ECX,0xff
004C877E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C8781  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
004C8787  03 CA                     ADD ECX,EDX
004C8789  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004C878C  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004C878F  C1 E0 02                  SHL EAX,0x2
004C8792  99                        CDQ
004C8793  F7 3C 8D 78 41 7E 00      IDIV dword ptr [ECX*0x4 + 0x7e4178]
004C879A  89 83 D7 05 00 00         MOV dword ptr [EBX + 0x5d7],EAX
004C87A0  8A 83 3D 02 00 00         MOV AL,byte ptr [EBX + 0x23d]
004C87A6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C87AC  50                        PUSH EAX
004C87AD  E8 05 C2 F3 FF            CALL 0x004049b7
004C87B2  8A C8                     MOV CL,AL
004C87B4  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C87BA  81 E1 FF 00 00 00         AND ECX,0xff
004C87C0  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C87C3  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
004C87C9  03 CA                     ADD ECX,EDX
004C87CB  3B 04 8D 78 41 7E 00      CMP EAX,dword ptr [ECX*0x4 + 0x7e4178]
004C87D2  7C 32                     JL 0x004c8806
004C87D4  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004C87DA  51                        PUSH ECX
004C87DB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C87E1  E8 D1 C1 F3 FF            CALL 0x004049b7
004C87E6  8A D0                     MOV DL,AL
004C87E8  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C87EE  81 E2 FF 00 00 00         AND EDX,0xff
004C87F4  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C87F7  03 D0                     ADD EDX,EAX
004C87F9  8B 0C 95 78 41 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e4178]
004C8800  89 8B 41 02 00 00         MOV dword ptr [EBX + 0x241],ECX
LAB_004c8806:
004C8806  8D 93 A4 03 00 00         LEA EDX,[EBX + 0x3a4]
004C880C  8D 83 A0 03 00 00         LEA EAX,[EBX + 0x3a0]
004C8812  52                        PUSH EDX
004C8813  8D 8B 9C 03 00 00         LEA ECX,[EBX + 0x39c]
004C8819  50                        PUSH EAX
004C881A  8B 83 69 03 00 00         MOV EAX,dword ptr [EBX + 0x369]
004C8820  8D 93 98 03 00 00         LEA EDX,[EBX + 0x398]
004C8826  51                        PUSH ECX
004C8827  8B 8B 61 03 00 00         MOV ECX,dword ptr [EBX + 0x361]
004C882D  52                        PUSH EDX
004C882E  50                        PUSH EAX
004C882F  51                        PUSH ECX
004C8830  8B CB                     MOV ECX,EBX
004C8832  E8 A8 AD F3 FF            CALL 0x004035df
004C8837  8B CB                     MOV ECX,EBX
004C8839  E8 F0 D1 F3 FF            CALL 0x00405a2e
004C883E  5F                        POP EDI
004C883F  5E                        POP ESI
004C8840  33 C0                     XOR EAX,EAX
004C8842  5B                        POP EBX
004C8843  8B E5                     MOV ESP,EBP
004C8845  5D                        POP EBP
004C8846  C3                        RET
LAB_004c8847:
004C8847  F7 A3 90 03 00 00         MUL dword ptr [EBX + 0x390]
004C884D  8B F2                     MOV ESI,EDX
004C884F  C1 EE 05                  SHR ESI,0x5
004C8852  75 05                     JNZ 0x004c8859
004C8854  BE 01 00 00 00            MOV ESI,0x1
LAB_004c8859:
004C8859  8B 13                     MOV EDX,dword ptr [EBX]
004C885B  8B CB                     MOV ECX,EBX
004C885D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004C8860  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8866  50                        PUSH EAX
004C8867  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C886A  50                        PUSH EAX
004C886B  E8 27 A0 F3 FF            CALL 0x00402897
004C8870  85 C0                     TEST EAX,EAX
004C8872  74 1E                     JZ 0x004c8892
004C8874  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004C8877  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C887A  51                        PUSH ECX
004C887B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8881  52                        PUSH EDX
004C8882  E8 11 A4 F3 FF            CALL 0x00402c98
004C8887  85 C0                     TEST EAX,EAX
004C8889  75 07                     JNZ 0x004c8892
004C888B  B8 01 00 00 00            MOV EAX,0x1
004C8890  EB 02                     JMP 0x004c8894
LAB_004c8892:
004C8892  33 C0                     XOR EAX,EAX
LAB_004c8894:
004C8894  3B C7                     CMP EAX,EDI
004C8896  89 83 B8 03 00 00         MOV dword ptr [EBX + 0x3b8],EAX
004C889C  74 18                     JZ 0x004c88b6
004C889E  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004C88A4  C1 E6 02                  SHL ESI,0x2
004C88A7  3B CF                     CMP ECX,EDI
004C88A9  74 0B                     JZ 0x004c88b6
004C88AB  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C88AE  6A 05                     PUSH 0x5
004C88B0  50                        PUSH EAX
004C88B1  E8 3E A2 F3 FF            CALL 0x00402af4
LAB_004c88b6:
004C88B6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C88BC  8B 93 8C 03 00 00         MOV EDX,dword ptr [EBX + 0x38c]
004C88C2  03 D6                     ADD EDX,ESI
004C88C4  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004C88CA  3B C2                     CMP EAX,EDX
004C88CC  0F 82 38 05 00 00         JC 0x004c8e0a
004C88D2  89 83 8C 03 00 00         MOV dword ptr [EBX + 0x38c],EAX
004C88D8  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C88DE  33 FF                     XOR EDI,EDI
004C88E0  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
004C88E7  89 BB C0 03 00 00         MOV dword ptr [EBX + 0x3c0],EDI
004C88ED  89 BB C8 03 00 00         MOV dword ptr [EBX + 0x3c8],EDI
004C88F3  89 BB C4 03 00 00         MOV dword ptr [EBX + 0x3c4],EDI
004C88F9  89 BB BC 03 00 00         MOV dword ptr [EBX + 0x3bc],EDI
004C88FF  8B 0C 85 70 4D 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794d70]
004C8906  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004C8909  83 F9 FF                  CMP ECX,-0x1
004C890C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004C890F  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004C8912  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004C8915  0F 84 D7 02 00 00         JZ 0x004c8bf2
004C891B  8B BB 98 03 00 00         MOV EDI,dword ptr [EBX + 0x398]
004C8921  83 FF 64                  CMP EDI,0x64
004C8924  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004C8927  7C 14                     JL 0x004c893d
004C8929  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C892E  F7 EF                     IMUL EDI
004C8930  C1 FA 05                  SAR EDX,0x5
004C8933  8B CA                     MOV ECX,EDX
004C8935  C1 E9 1F                  SHR ECX,0x1f
004C8938  03 D1                     ADD EDX,ECX
004C893A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004c893d:
004C893D  8B 8B 9C 03 00 00         MOV ECX,dword ptr [EBX + 0x39c]
004C8943  83 F9 64                  CMP ECX,0x64
004C8946  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004C8949  7C 14                     JL 0x004c895f
004C894B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C8950  F7 E9                     IMUL ECX
004C8952  C1 FA 05                  SAR EDX,0x5
004C8955  8B C2                     MOV EAX,EDX
004C8957  C1 E8 1F                  SHR EAX,0x1f
004C895A  03 D0                     ADD EDX,EAX
004C895C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_004c895f:
004C895F  8B B3 A0 03 00 00         MOV ESI,dword ptr [EBX + 0x3a0]
004C8965  83 FE 64                  CMP ESI,0x64
004C8968  7C 14                     JL 0x004c897e
004C896A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C896F  F7 EE                     IMUL ESI
004C8971  C1 FA 05                  SAR EDX,0x5
004C8974  8B CA                     MOV ECX,EDX
004C8976  C1 E9 1F                  SHR ECX,0x1f
004C8979  03 D1                     ADD EDX,ECX
004C897B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_004c897e:
004C897E  8B 8B A4 03 00 00         MOV ECX,dword ptr [EBX + 0x3a4]
004C8984  83 F9 64                  CMP ECX,0x64
004C8987  7C 14                     JL 0x004c899d
004C8989  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C898E  F7 E9                     IMUL ECX
004C8990  C1 FA 05                  SAR EDX,0x5
004C8993  8B C2                     MOV EAX,EDX
004C8995  C1 E8 1F                  SHR EAX,0x1f
004C8998  03 D0                     ADD EDX,EAX
004C899A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004c899d:
004C899D  8B C7                     MOV EAX,EDI
004C899F  BF 64 00 00 00            MOV EDI,0x64
004C89A4  99                        CDQ
004C89A5  F7 FF                     IDIV EDI
004C89A7  85 D2                     TEST EDX,EDX
004C89A9  74 03                     JZ 0x004c89ae
004C89AB  FF 45 F0                  INC dword ptr [EBP + -0x10]
LAB_004c89ae:
004C89AE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004C89B1  BF 64 00 00 00            MOV EDI,0x64
004C89B6  99                        CDQ
004C89B7  F7 FF                     IDIV EDI
004C89B9  85 D2                     TEST EDX,EDX
004C89BB  74 03                     JZ 0x004c89c0
004C89BD  FF 45 F4                  INC dword ptr [EBP + -0xc]
LAB_004c89c0:
004C89C0  8B C6                     MOV EAX,ESI
004C89C2  BF 64 00 00 00            MOV EDI,0x64
004C89C7  99                        CDQ
004C89C8  F7 FF                     IDIV EDI
004C89CA  85 D2                     TEST EDX,EDX
004C89CC  74 03                     JZ 0x004c89d1
004C89CE  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004c89d1:
004C89D1  8B C1                     MOV EAX,ECX
004C89D3  BF 64 00 00 00            MOV EDI,0x64
004C89D8  99                        CDQ
004C89D9  F7 FF                     IDIV EDI
004C89DB  85 D2                     TEST EDX,EDX
004C89DD  74 03                     JZ 0x004c89e2
004C89DF  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_004c89e2:
004C89E2  8B 83 A8 03 00 00         MOV EAX,dword ptr [EBX + 0x3a8]
004C89E8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004C89EB  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004C89EE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004C89F1  3B FA                     CMP EDI,EDX
004C89F3  7E 05                     JLE 0x004c89fa
004C89F5  2B D0                     SUB EDX,EAX
004C89F7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004c89fa:
004C89FA  8B 83 AC 03 00 00         MOV EAX,dword ptr [EBX + 0x3ac]
004C8A00  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004C8A03  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004C8A06  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004C8A09  3B FA                     CMP EDI,EDX
004C8A0B  7E 05                     JLE 0x004c8a12
004C8A0D  2B D0                     SUB EDX,EAX
004C8A0F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_004c8a12:
004C8A12  8B 83 B0 03 00 00         MOV EAX,dword ptr [EBX + 0x3b0]
004C8A18  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C8A1B  03 D0                     ADD EDX,EAX
004C8A1D  3B D6                     CMP EDX,ESI
004C8A1F  7E 05                     JLE 0x004c8a26
004C8A21  2B F0                     SUB ESI,EAX
004C8A23  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_004c8a26:
004C8A26  8B 83 B4 03 00 00         MOV EAX,dword ptr [EBX + 0x3b4]
004C8A2C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C8A2F  03 D0                     ADD EDX,EAX
004C8A31  3B D1                     CMP EDX,ECX
004C8A33  7E 05                     JLE 0x004c8a3a
004C8A35  2B C8                     SUB ECX,EAX
004C8A37  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004c8a3a:
004C8A3A  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C8A3D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8A43  50                        PUSH EAX
004C8A44  E8 6E BF F3 FF            CALL 0x004049b7
004C8A49  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004C8A4C  3C 03                     CMP AL,0x3
004C8A4E  75 25                     JNZ 0x004c8a75
004C8A50  85 FF                     TEST EDI,EDI
004C8A52  74 54                     JZ 0x004c8aa8
004C8A54  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004C8A57  51                        PUSH ECX
004C8A58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8A5E  E8 44 AC F3 FF            CALL 0x004036a7
004C8A63  3B C7                     CMP EAX,EDI
004C8A65  7D 41                     JGE 0x004c8aa8
004C8A67  33 F6                     XOR ESI,ESI
004C8A69  C7 83 C8 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3c8],0x1
004C8A73  EB 36                     JMP 0x004c8aab
LAB_004c8a75:
004C8A75  85 FF                     TEST EDI,EDI
004C8A77  74 2F                     JZ 0x004c8aa8
004C8A79  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8A7F  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8A82  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8A89  50                        PUSH EAX
004C8A8A  51                        PUSH ECX
004C8A8B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8A91  E8 67 D3 F3 FF            CALL 0x00405dfd
004C8A96  3B C7                     CMP EAX,EDI
004C8A98  7D 0E                     JGE 0x004c8aa8
004C8A9A  33 F6                     XOR ESI,ESI
004C8A9C  C7 83 C8 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3c8],0x1
004C8AA6  EB 03                     JMP 0x004c8aab
LAB_004c8aa8:
004C8AA8  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_004c8aab:
004C8AAB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004C8AAE  85 C0                     TEST EAX,EAX
004C8AB0  74 2E                     JZ 0x004c8ae0
004C8AB2  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8AB8  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8ABB  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8AC2  50                        PUSH EAX
004C8AC3  51                        PUSH ECX
004C8AC4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8ACA  E8 8D D3 F3 FF            CALL 0x00405e5c
004C8ACF  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
004C8AD2  7D 0C                     JGE 0x004c8ae0
004C8AD4  33 F6                     XOR ESI,ESI
004C8AD6  C7 83 C4 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3c4],0x1
LAB_004c8ae0:
004C8AE0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C8AE3  85 C0                     TEST EAX,EAX
004C8AE5  74 2E                     JZ 0x004c8b15
004C8AE7  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8AED  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8AF0  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8AF7  50                        PUSH EAX
004C8AF8  51                        PUSH ECX
004C8AF9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8AFF  E8 A7 98 F3 FF            CALL 0x004023ab
004C8B04  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
004C8B07  7D 0C                     JGE 0x004c8b15
004C8B09  33 F6                     XOR ESI,ESI
004C8B0B  C7 83 BC 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3bc],0x1
LAB_004c8b15:
004C8B15  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004C8B18  85 C0                     TEST EAX,EAX
004C8B1A  0F 84 CA 00 00 00         JZ 0x004c8bea
004C8B20  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8B26  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8B29  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8B30  50                        PUSH EAX
004C8B31  51                        PUSH ECX
004C8B32  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8B38  E8 89 BE F3 FF            CALL 0x004049c6
004C8B3D  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
004C8B40  0F 8D A4 00 00 00         JGE 0x004c8bea
004C8B46  C7 83 C0 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3c0],0x1
LAB_004c8b50:
004C8B50  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004C8B56  85 C9                     TEST ECX,ECX
004C8B58  0F 84 AC 02 00 00         JZ 0x004c8e0a
004C8B5E  8B 83 BC 03 00 00         MOV EAX,dword ptr [EBX + 0x3bc]
004C8B64  85 C0                     TEST EAX,EAX
004C8B66  74 0B                     JZ 0x004c8b73
004C8B68  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004C8B6B  6A 04                     PUSH 0x4
004C8B6D  52                        PUSH EDX
004C8B6E  E8 81 9F F3 FF            CALL 0x00402af4
LAB_004c8b73:
004C8B73  8B 83 C4 03 00 00         MOV EAX,dword ptr [EBX + 0x3c4]
004C8B79  85 C0                     TEST EAX,EAX
004C8B7B  74 11                     JZ 0x004c8b8e
004C8B7D  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C8B80  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004C8B86  6A 02                     PUSH 0x2
004C8B88  50                        PUSH EAX
004C8B89  E8 66 9F F3 FF            CALL 0x00402af4
LAB_004c8b8e:
004C8B8E  8B 83 C8 03 00 00         MOV EAX,dword ptr [EBX + 0x3c8]
004C8B94  85 C0                     TEST EAX,EAX
004C8B96  74 2A                     JZ 0x004c8bc2
004C8B98  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8B9B  51                        PUSH ECX
004C8B9C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8BA2  E8 10 BE F3 FF            CALL 0x004049b7
004C8BA7  2C 03                     SUB AL,0x3
004C8BA9  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004C8BAC  F6 D8                     NEG AL
004C8BAE  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004C8BB4  1B C0                     SBB EAX,EAX
004C8BB6  24 FD                     AND AL,0xfd
004C8BB8  83 C0 06                  ADD EAX,0x6
004C8BBB  50                        PUSH EAX
004C8BBC  52                        PUSH EDX
004C8BBD  E8 32 9F F3 FF            CALL 0x00402af4
LAB_004c8bc2:
004C8BC2  8B 83 C0 03 00 00         MOV EAX,dword ptr [EBX + 0x3c0]
004C8BC8  85 C0                     TEST EAX,EAX
004C8BCA  0F 84 3A 02 00 00         JZ 0x004c8e0a
004C8BD0  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C8BD3  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004C8BD9  6A 07                     PUSH 0x7
004C8BDB  50                        PUSH EAX
004C8BDC  E8 13 9F F3 FF            CALL 0x00402af4
004C8BE1  5F                        POP EDI
004C8BE2  5E                        POP ESI
004C8BE3  33 C0                     XOR EAX,EAX
004C8BE5  5B                        POP EBX
004C8BE6  8B E5                     MOV ESP,EBP
004C8BE8  5D                        POP EBP
004C8BE9  C3                        RET
LAB_004c8bea:
004C8BEA  85 F6                     TEST ESI,ESI
004C8BEC  0F 84 5E FF FF FF         JZ 0x004c8b50
LAB_004c8bf2:
004C8BF2  8B 8B 94 03 00 00         MOV ECX,dword ptr [EBX + 0x394]
004C8BF8  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8BFE  41                        INC ECX
004C8BFF  89 8B 94 03 00 00         MOV dword ptr [EBX + 0x394],ECX
004C8C05  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8C0C  83 F8 FF                  CMP EAX,-0x1
004C8C0F  0F 84 0A 01 00 00         JZ 0x004c8d1f
004C8C15  8B B3 A8 03 00 00         MOV ESI,dword ptr [EBX + 0x3a8]
004C8C1B  8B 93 AC 03 00 00         MOV EDX,dword ptr [EBX + 0x3ac]
004C8C21  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C8C24  8B 8B B0 03 00 00         MOV ECX,dword ptr [EBX + 0x3b0]
004C8C2A  03 F7                     ADD ESI,EDI
004C8C2C  03 C8                     ADD ECX,EAX
004C8C2E  89 B3 A8 03 00 00         MOV dword ptr [EBX + 0x3a8],ESI
004C8C34  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004C8C37  03 D6                     ADD EDX,ESI
004C8C39  89 8B B0 03 00 00         MOV dword ptr [EBX + 0x3b0],ECX
004C8C3F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004C8C42  89 93 AC 03 00 00         MOV dword ptr [EBX + 0x3ac],EDX
004C8C48  8B 93 B4 03 00 00         MOV EDX,dword ptr [EBX + 0x3b4]
004C8C4E  03 D1                     ADD EDX,ECX
004C8C50  89 93 B4 03 00 00         MOV dword ptr [EBX + 0x3b4],EDX
004C8C56  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C8C59  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8C5F  52                        PUSH EDX
004C8C60  E8 52 BD F3 FF            CALL 0x004049b7
004C8C65  3C 03                     CMP AL,0x3
004C8C67  75 16                     JNZ 0x004c8c7f
004C8C69  85 FF                     TEST EDI,EDI
004C8C6B  74 38                     JZ 0x004c8ca5
004C8C6D  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C8C70  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8C76  57                        PUSH EDI
004C8C77  50                        PUSH EAX
004C8C78  E8 7C B7 F3 FF            CALL 0x004043f9
004C8C7D  EB 26                     JMP 0x004c8ca5
LAB_004c8c7f:
004C8C7F  85 FF                     TEST EDI,EDI
004C8C81  74 22                     JZ 0x004c8ca5
004C8C83  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8C89  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004C8C8C  57                        PUSH EDI
004C8C8D  51                        PUSH ECX
004C8C8E  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8C95  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8C98  50                        PUSH EAX
004C8C99  51                        PUSH ECX
004C8C9A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8CA0  E8 54 9E F3 FF            CALL 0x00402af9
LAB_004c8ca5:
004C8CA5  85 F6                     TEST ESI,ESI
004C8CA7  74 22                     JZ 0x004c8ccb
004C8CA9  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C8CAF  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004C8CB2  56                        PUSH ESI
004C8CB3  52                        PUSH EDX
004C8CB4  8B 0C 85 70 4D 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794d70]
004C8CBB  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C8CBE  51                        PUSH ECX
004C8CBF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8CC5  52                        PUSH EDX
004C8CC6  E8 41 9F F3 FF            CALL 0x00402c0c
LAB_004c8ccb:
004C8CCB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C8CCE  85 C0                     TEST EAX,EAX
004C8CD0  74 22                     JZ 0x004c8cf4
004C8CD2  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C8CD8  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004C8CDB  50                        PUSH EAX
004C8CDC  51                        PUSH ECX
004C8CDD  8B 04 95 70 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d70]
004C8CE4  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C8CE7  50                        PUSH EAX
004C8CE8  51                        PUSH ECX
004C8CE9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8CEF  E8 9F 9A F3 FF            CALL 0x00402793
LAB_004c8cf4:
004C8CF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004C8CF7  85 C0                     TEST EAX,EAX
004C8CF9  74 24                     JZ 0x004c8d1f
004C8CFB  8B 8B 61 03 00 00         MOV ECX,dword ptr [EBX + 0x361]
004C8D01  8B D0                     MOV EDX,EAX
004C8D03  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004C8D06  52                        PUSH EDX
004C8D07  8B 14 8D 70 4D 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x794d70]
004C8D0E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8D14  50                        PUSH EAX
004C8D15  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C8D18  52                        PUSH EDX
004C8D19  50                        PUSH EAX
004C8D1A  E8 D7 A5 F3 FF            CALL 0x004032f6
LAB_004c8d1f:
004C8D1F  8B 8B 94 03 00 00         MOV ECX,dword ptr [EBX + 0x394]
004C8D25  B8 64 00 00 00            MOV EAX,0x64
004C8D2A  3B C8                     CMP ECX,EAX
004C8D2C  7E 06                     JLE 0x004c8d34
004C8D2E  89 83 94 03 00 00         MOV dword ptr [EBX + 0x394],EAX
LAB_004c8d34:
004C8D34  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004C8D37  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C8D3A  33 D2                     XOR EDX,EDX
004C8D3C  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004C8D42  3B C2                     CMP EAX,EDX
004C8D44  0F 85 C0 00 00 00         JNZ 0x004c8e0a
004C8D4A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8D50  50                        PUSH EAX
004C8D51  E8 37 BE F3 FF            CALL 0x00404b8d
004C8D56  5F                        POP EDI
004C8D57  5E                        POP ESI
004C8D58  33 C0                     XOR EAX,EAX
004C8D5A  5B                        POP EBX
004C8D5B  8B E5                     MOV ESP,EBP
004C8D5D  5D                        POP EBP
004C8D5E  C3                        RET
LAB_004c8d5f:
004C8D5F  39 BB D4 03 00 00         CMP dword ptr [EBX + 0x3d4],EDI
004C8D65  0F 84 9F 00 00 00         JZ 0x004c8e0a
004C8D6B  8B 83 07 06 00 00         MOV EAX,dword ptr [EBX + 0x607]
004C8D71  3B C7                     CMP EAX,EDI
004C8D73  0F 84 91 00 00 00         JZ 0x004c8e0a
004C8D79  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004C8D7C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004C8D7F  8B 00                     MOV EAX,dword ptr [EAX]
004C8D81  57                        PUSH EDI
004C8D82  6A 01                     PUSH 0x1
004C8D84  51                        PUSH ECX
004C8D85  52                        PUSH EDX
004C8D86  50                        PUSH EAX
004C8D87  8B CB                     MOV ECX,EBX
004C8D89  E8 40 CD F3 FF            CALL 0x00405ace
004C8D8E  85 C0                     TEST EAX,EAX
004C8D90  74 78                     JZ 0x004c8e0a
004C8D92  8B 83 07 06 00 00         MOV EAX,dword ptr [EBX + 0x607]
004C8D98  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004C8D9B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004C8D9E  8B 00                     MOV EAX,dword ptr [EAX]
004C8DA0  51                        PUSH ECX
004C8DA1  52                        PUSH EDX
004C8DA2  50                        PUSH EAX
004C8DA3  8B CB                     MOV ECX,EBX
004C8DA5  E8 93 9A F3 FF            CALL 0x0040283d
004C8DAA  85 C0                     TEST EAX,EAX
004C8DAC  74 5C                     JZ 0x004c8e0a
004C8DAE  8B 83 07 06 00 00         MOV EAX,dword ptr [EBX + 0x607]
004C8DB4  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
004C8DB7  8D 48 18                  LEA ECX,[EAX + 0x18]
004C8DBA  51                        PUSH ECX
004C8DBB  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
004C8DBE  52                        PUSH EDX
004C8DBF  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004C8DC2  51                        PUSH ECX
004C8DC3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004C8DC6  52                        PUSH EDX
004C8DC7  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004C8DCA  8B 00                     MOV EAX,dword ptr [EAX]
004C8DCC  57                        PUSH EDI
004C8DCD  51                        PUSH ECX
004C8DCE  52                        PUSH EDX
004C8DCF  50                        PUSH EAX
004C8DD0  8B CB                     MOV ECX,EBX
004C8DD2  E8 82 C9 F3 FF            CALL 0x00405759
004C8DD7  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C8DDD  83 F8 01                  CMP EAX,0x1
004C8DE0  7E 22                     JLE 0x004c8e04
004C8DE2  8B BB 07 06 00 00         MOV EDI,dword ptr [EBX + 0x607]
004C8DE8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C8DEB  C1 E1 03                  SHL ECX,0x3
004C8DEE  2B C8                     SUB ECX,EAX
004C8DF0  8D 77 27                  LEA ESI,[EDI + 0x27]
004C8DF3  83 E9 27                  SUB ECX,0x27
004C8DF6  8B D1                     MOV EDX,ECX
004C8DF8  C1 E9 02                  SHR ECX,0x2
004C8DFB  F3 A5                     MOVSD.REP ES:EDI,ESI
004C8DFD  8B CA                     MOV ECX,EDX
004C8DFF  83 E1 03                  AND ECX,0x3
004C8E02  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004c8e04:
004C8E04  FF 8B D4 03 00 00         DEC dword ptr [EBX + 0x3d4]
LAB_004c8e0a:
004C8E0A  5F                        POP EDI
004C8E0B  5E                        POP ESI
004C8E0C  33 C0                     XOR EAX,EAX
004C8E0E  5B                        POP EBX
004C8E0F  8B E5                     MOV ESP,EBP
004C8E11  5D                        POP EBP
004C8E12  C3                        RET
