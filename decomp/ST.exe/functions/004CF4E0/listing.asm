FUN_004cf4e0:
004CF4E0  55                        PUSH EBP
004CF4E1  8B EC                     MOV EBP,ESP
004CF4E3  56                        PUSH ESI
004CF4E4  8B F1                     MOV ESI,ECX
004CF4E6  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004CF4EC  85 C0                     TEST EAX,EAX
004CF4EE  74 05                     JZ 0x004cf4f5
004CF4F0  E8 75 56 F3 FF            CALL 0x00404b6a
LAB_004cf4f5:
004CF4F5  8B 8E D4 03 00 00         MOV ECX,dword ptr [ESI + 0x3d4]
004CF4FB  8B 86 D8 03 00 00         MOV EAX,dword ptr [ESI + 0x3d8]
004CF501  41                        INC ECX
004CF502  3B C8                     CMP ECX,EAX
004CF504  7C 24                     JL 0x004cf52a
004CF506  83 C0 14                  ADD EAX,0x14
004CF509  89 86 D8 03 00 00         MOV dword ptr [ESI + 0x3d8],EAX
004CF50F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004CF512  C1 E2 03                  SHL EDX,0x3
004CF515  2B D0                     SUB EDX,EAX
004CF517  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004CF51D  52                        PUSH EDX
004CF51E  50                        PUSH EAX
004CF51F  E8 2C DA 1D 00            CALL 0x006acf50
004CF524  89 86 07 06 00 00         MOV dword ptr [ESI + 0x607],EAX
LAB_004cf52a:
004CF52A  8B 86 D4 03 00 00         MOV EAX,dword ptr [ESI + 0x3d4]
004CF530  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004CF536  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004CF539  C1 E2 03                  SHL EDX,0x3
004CF53C  2B D0                     SUB EDX,EAX
004CF53E  52                        PUSH EDX
004CF53F  51                        PUSH ECX
004CF540  83 C1 27                  ADD ECX,0x27
004CF543  51                        PUSH ECX
004CF544  E8 27 E5 25 00            CALL 0x0072da70
004CF549  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004CF54F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CF552  83 C4 0C                  ADD ESP,0xc
004CF555  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
004CF55B  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004CF561  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
004CF564  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004CF56A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CF56D  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004CF570  8B 96 07 06 00 00         MOV EDX,dword ptr [ESI + 0x607]
004CF576  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CF579  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
004CF57C  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004CF582  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CF585  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
004CF588  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004CF58E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004CF591  33 D2                     XOR EDX,EDX
004CF593  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
004CF596  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004CF59C  83 C0 18                  ADD EAX,0x18
004CF59F  89 10                     MOV dword ptr [EAX],EDX
004CF5A1  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004CF5A4  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
004CF5A7  66 89 50 0C               MOV word ptr [EAX + 0xc],DX
004CF5AB  88 50 0E                  MOV byte ptr [EAX + 0xe],DL
004CF5AE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004CF5B1  85 C0                     TEST EAX,EAX
004CF5B3  74 15                     JZ 0x004cf5ca
004CF5B5  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004CF5BB  6A 0F                     PUSH 0xf
004CF5BD  83 C1 18                  ADD ECX,0x18
004CF5C0  50                        PUSH EAX
004CF5C1  51                        PUSH ECX
004CF5C2  E8 79 ED 25 00            CALL 0x0072e340
004CF5C7  83 C4 0C                  ADD ESP,0xc
LAB_004cf5ca:
004CF5CA  8B 86 D4 03 00 00         MOV EAX,dword ptr [ESI + 0x3d4]
004CF5D0  8B CE                     MOV ECX,ESI
004CF5D2  40                        INC EAX
004CF5D3  89 86 D4 03 00 00         MOV dword ptr [ESI + 0x3d4],EAX
004CF5D9  E8 50 64 F3 FF            CALL 0x00405a2e
004CF5DE  33 C0                     XOR EAX,EAX
004CF5E0  5E                        POP ESI
004CF5E1  5D                        POP EBP
004CF5E2  C2 18 00                  RET 0x18
