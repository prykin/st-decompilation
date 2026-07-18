FUN_0074dfb5:
0074DFB5  56                        PUSH ESI
0074DFB6  8B F1                     MOV ESI,ECX
0074DFB8  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074DFBB  E8 3F 03 00 00            CALL 0x0074e2ff
0074DFC0  85 C0                     TEST EAX,EAX
0074DFC2  75 0C                     JNZ 0x0074dfd0
0074DFC4  6A 0C                     PUSH 0xc
0074DFC6  E8 65 05 FE FF            CALL 0x0072e530
0074DFCB  85 C0                     TEST EAX,EAX
0074DFCD  59                        POP ECX
0074DFCE  74 21                     JZ 0x0074dff1
LAB_0074dfd0:
0074DFD0  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074DFD4  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0074DFD7  83 20 00                  AND dword ptr [EAX],0x0
0074DFDA  8B 0E                     MOV ECX,dword ptr [ESI]
0074DFDC  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0074DFDF  8B 0E                     MOV ECX,dword ptr [ESI]
0074DFE1  85 C9                     TEST ECX,ECX
0074DFE3  75 05                     JNZ 0x0074dfea
0074DFE5  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0074DFE8  EB 02                     JMP 0x0074dfec
LAB_0074dfea:
0074DFEA  89 01                     MOV dword ptr [ECX],EAX
LAB_0074dfec:
0074DFEC  FF 46 08                  INC dword ptr [ESI + 0x8]
0074DFEF  89 06                     MOV dword ptr [ESI],EAX
LAB_0074dff1:
0074DFF1  5E                        POP ESI
0074DFF2  C2 04 00                  RET 0x4
