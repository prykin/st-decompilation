FUN_004e8f90:
004E8F90  56                        PUSH ESI
004E8F91  8B F1                     MOV ESI,ECX
004E8F93  B8 FF FF 00 00            MOV EAX,0xffff
004E8F98  39 86 D8 04 00 00         CMP dword ptr [ESI + 0x4d8],EAX
004E8F9E  74 3A                     JZ 0x004e8fda
004E8FA0  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004E8FA6  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E8FAC  85 C0                     TEST EAX,EAX
004E8FAE  74 2A                     JZ 0x004e8fda
004E8FB0  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004E8FB6  8B 8E E8 04 00 00         MOV ECX,dword ptr [ESI + 0x4e8]
004E8FBC  8B 96 E4 04 00 00         MOV EDX,dword ptr [ESI + 0x4e4]
004E8FC2  50                        PUSH EAX
004E8FC3  51                        PUSH ECX
004E8FC4  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E8FCA  52                        PUSH EDX
004E8FCB  E8 04 8E F1 FF            CALL 0x00401dd4
004E8FD0  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004e8fda:
004E8FDA  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E8FE0  85 C0                     TEST EAX,EAX
004E8FE2  74 2E                     JZ 0x004e9012
004E8FE4  8B 86 FC 04 00 00         MOV EAX,dword ptr [ESI + 0x4fc]
004E8FEA  85 C0                     TEST EAX,EAX
004E8FEC  74 24                     JZ 0x004e9012
004E8FEE  8B 8E 1B 06 00 00         MOV ECX,dword ptr [ESI + 0x61b]
004E8FF4  85 C9                     TEST ECX,ECX
004E8FF6  74 1A                     JZ 0x004e9012
004E8FF8  56                        PUSH ESI
004E8FF9  E8 52 8F F1 FF            CALL 0x00401f50
004E8FFE  C7 86 F8 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4f8],0x0
004E9008  C7 86 FC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4fc],0x0
LAB_004e9012:
004E9012  33 C0                     XOR EAX,EAX
004E9014  5E                        POP ESI
004E9015  C3                        RET
