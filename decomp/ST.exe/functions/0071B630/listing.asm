FUN_0071b630:
0071B630  55                        PUSH EBP
0071B631  8B EC                     MOV EBP,ESP
0071B633  83 EC 10                  SUB ESP,0x10
0071B636  53                        PUSH EBX
0071B637  56                        PUSH ESI
0071B638  8B F1                     MOV ESI,ECX
0071B63A  57                        PUSH EDI
0071B63B  8D 5E 78                  LEA EBX,[ESI + 0x78]
0071B63E  53                        PUSH EBX
0071B63F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0071B645  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0071B648  85 FF                     TEST EDI,EDI
0071B64A  74 0F                     JZ 0x0071b65b
0071B64C  8B CF                     MOV ECX,EDI
0071B64E  33 C0                     XOR EAX,EAX
0071B650  89 01                     MOV dword ptr [ECX],EAX
0071B652  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0071B655  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0071B658  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
LAB_0071b65b:
0071B65B  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0071B65E  85 C0                     TEST EAX,EAX
0071B660  75 1D                     JNZ 0x0071b67f
0071B662  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0071B665  50                        PUSH EAX
0071B666  8B 10                     MOV EDX,dword ptr [EAX]
0071B668  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0071B66B  33 C9                     XOR ECX,ECX
0071B66D  85 C0                     TEST EAX,EAX
0071B66F  0F 9D C1                  SETGE CL
0071B672  8B C1                     MOV EAX,ECX
0071B674  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
0071B677  85 C0                     TEST EAX,EAX
0071B679  0F 84 BC 00 00 00         JZ 0x0071b73b
LAB_0071b67f:
0071B67F  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0071B682  8D 4D F0                  LEA ECX,[EBP + -0x10]
0071B685  51                        PUSH ECX
0071B686  6A 10                     PUSH 0x10
0071B688  8B 10                     MOV EDX,dword ptr [EAX]
0071B68A  50                        PUSH EAX
0071B68B  FF 52 24                  CALL dword ptr [EDX + 0x24]
0071B68E  85 C0                     TEST EAX,EAX
0071B690  74 14                     JZ 0x0071b6a6
0071B692  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071B698  6A 77                     PUSH 0x77
0071B69A  68 2C 09 7F 00            PUSH 0x7f092c
0071B69F  52                        PUSH EDX
0071B6A0  50                        PUSH EAX
0071B6A1  E8 9A A7 F8 FF            CALL 0x006a5e40
LAB_0071b6a6:
0071B6A6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071B6A9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0071B6AC  85 FF                     TEST EDI,EDI
0071B6AE  74 11                     JZ 0x0071b6c1
0071B6B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0071B6B3  89 0F                     MOV dword ptr [EDI],ECX
0071B6B5  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0071B6B8  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0071B6BB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071B6BE  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
LAB_0071b6c1:
0071B6C1  85 C9                     TEST ECX,ECX
0071B6C3  75 04                     JNZ 0x0071b6c9
0071B6C5  85 C0                     TEST EAX,EAX
0071B6C7  74 72                     JZ 0x0071b73b
LAB_0071b6c9:
0071B6C9  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
0071B6CC  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0071B6CF  03 F9                     ADD EDI,ECX
0071B6D1  03 D0                     ADD EDX,EAX
0071B6D3  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0071B6D6  8B CF                     MOV ECX,EDI
0071B6D8  3B C8                     CMP ECX,EAX
0071B6DA  C7 46 74 01 00 00 00      MOV dword ptr [ESI + 0x74],0x1
0071B6E1  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
0071B6E4  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
0071B6E7  7D 03                     JGE 0x0071b6ec
0071B6E9  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
LAB_0071b6ec:
0071B6EC  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0071B6EF  3B D1                     CMP EDX,ECX
0071B6F1  7D 03                     JGE 0x0071b6f6
0071B6F3  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
LAB_0071b6f6:
0071B6F6  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0071B6F9  03 C2                     ADD EAX,EDX
0071B6FB  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0071B6FE  3B D0                     CMP EDX,EAX
0071B700  7C 04                     JL 0x0071b706
0071B702  48                        DEC EAX
0071B703  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
LAB_0071b706:
0071B706  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0071B709  03 C1                     ADD EAX,ECX
0071B70B  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0071B70E  3B C8                     CMP ECX,EAX
0071B710  7C 04                     JL 0x0071b716
0071B712  48                        DEC EAX
0071B713  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
LAB_0071b716:
0071B716  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071B719  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
0071B71C  53                        PUSH EBX
0071B71D  89 0A                     MOV dword ptr [EDX],ECX
0071B71F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071B722  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0071B725  89 01                     MOV dword ptr [ECX],EAX
0071B727  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0071B72D  5F                        POP EDI
0071B72E  5E                        POP ESI
0071B72F  B8 01 00 00 00            MOV EAX,0x1
0071B734  5B                        POP EBX
0071B735  8B E5                     MOV ESP,EBP
0071B737  5D                        POP EBP
0071B738  C2 0C 00                  RET 0xc
LAB_0071b73b:
0071B73B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071B73E  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0071B741  53                        PUSH EBX
0071B742  89 10                     MOV dword ptr [EAX],EDX
0071B744  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071B747  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0071B74A  89 0A                     MOV dword ptr [EDX],ECX
0071B74C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0071B752  5F                        POP EDI
0071B753  5E                        POP ESI
0071B754  33 C0                     XOR EAX,EAX
0071B756  5B                        POP EBX
0071B757  8B E5                     MOV ESP,EBP
0071B759  5D                        POP EBP
0071B75A  C2 0C 00                  RET 0xc
