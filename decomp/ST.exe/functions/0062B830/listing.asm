FUN_0062b830:
0062B830  55                        PUSH EBP
0062B831  8B EC                     MOV EBP,ESP
0062B833  83 EC 40                  SUB ESP,0x40
0062B836  56                        PUSH ESI
0062B837  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0062B83A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062B83D  57                        PUSH EDI
0062B83E  B9 10 00 00 00            MOV ECX,0x10
0062B843  33 C0                     XOR EAX,EAX
0062B845  8D 7D C0                  LEA EDI,[EBP + -0x40]
0062B848  F3 AB                     STOSD.REP ES:EDI
0062B84A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062B84D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062B850  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062B853  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062B856  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0062B859  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0062B85C  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0062B85F  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0062B862  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0062B865  8B 06                     MOV EAX,dword ptr [ESI]
0062B867  33 FF                     XOR EDI,EDI
0062B869  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0062B86C  8B CE                     MOV ECX,ESI
0062B86E  C7 45 C0 D2 00 00 00      MOV dword ptr [EBP + -0x40],0xd2
0062B875  C7 45 C4 FF 00 00 00      MOV dword ptr [EBP + -0x3c],0xff
0062B87C  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0062B87F  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0062B882  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0062B889  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0062B88C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0062B88F  8B 14 85 68 1D 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x791d68]
0062B896  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062B899  33 C9                     XOR ECX,ECX
0062B89B  83 FA 01                  CMP EDX,0x1
0062B89E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0062B8A1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062B8A4  0F 94 C1                  SETZ CL
0062B8A7  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0062B8AA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062B8B0  8D 45 C0                  LEA EAX,[EBP + -0x40]
0062B8B3  57                        PUSH EDI
0062B8B4  50                        PUSH EAX
0062B8B5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0062B8B8  8B 11                     MOV EDX,dword ptr [ECX]
0062B8BA  57                        PUSH EDI
0062B8BB  57                        PUSH EDI
0062B8BC  68 24 01 00 00            PUSH 0x124
0062B8C1  FF 52 08                  CALL dword ptr [EDX + 0x8]
0062B8C4  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0062B8C7  8D 55 0E                  LEA EDX,[EBP + 0xe]
0062B8CA  51                        PUSH ECX
0062B8CB  8D 45 12                  LEA EAX,[EBP + 0x12]
0062B8CE  52                        PUSH EDX
0062B8CF  50                        PUSH EAX
0062B8D0  8B CE                     MOV ECX,ESI
0062B8D2  E8 EE 5F DD FF            CALL 0x004018c5
0062B8D7  39 7D 28                  CMP dword ptr [EBP + 0x28],EDI
0062B8DA  75 56                     JNZ 0x0062b932
0062B8DC  8B 0D B0 17 81 00         MOV ECX,dword ptr [0x008117b0]
0062B8E2  3B CF                     CMP ECX,EDI
0062B8E4  74 4C                     JZ 0x0062b932
0062B8E6  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0062B8E9  3B C7                     CMP EAX,EDI
0062B8EB  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
0062B8EE  75 21                     JNZ 0x0062b911
0062B8F0  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
0062B8F4  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
0062B8F8  57                        PUSH EDI
0062B8F9  52                        PUSH EDX
0062B8FA  0F BF 55 12               MOVSX EDX,word ptr [EBP + 0x12]
0062B8FE  50                        PUSH EAX
0062B8FF  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0062B902  52                        PUSH EDX
0062B903  6A 01                     PUSH 0x1
0062B905  50                        PUSH EAX
0062B906  E8 E8 7C DD FF            CALL 0x004035f3
0062B90B  8B 0D B0 17 81 00         MOV ECX,dword ptr [0x008117b0]
LAB_0062b911:
0062B911  83 7E 2C 01               CMP dword ptr [ESI + 0x2c],0x1
0062B915  75 1B                     JNZ 0x0062b932
0062B917  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
0062B91B  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
0062B91F  57                        PUSH EDI
0062B920  52                        PUSH EDX
0062B921  0F BF 55 12               MOVSX EDX,word ptr [EBP + 0x12]
0062B925  50                        PUSH EAX
0062B926  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0062B929  52                        PUSH EDX
0062B92A  6A 04                     PUSH 0x4
0062B92C  50                        PUSH EAX
0062B92D  E8 C1 7C DD FF            CALL 0x004035f3
LAB_0062b932:
0062B932  5F                        POP EDI
0062B933  5E                        POP ESI
0062B934  8B E5                     MOV ESP,EBP
0062B936  5D                        POP EBP
0062B937  C3                        RET
