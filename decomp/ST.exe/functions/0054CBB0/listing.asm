FUN_0054cbb0:
0054CBB0  55                        PUSH EBP
0054CBB1  8B EC                     MOV EBP,ESP
0054CBB3  8B 0D 38 82 7C 00         MOV ECX,dword ptr [0x007c8238]
0054CBB9  56                        PUSH ESI
0054CBBA  33 F6                     XOR ESI,ESI
0054CBBC  57                        PUSH EDI
0054CBBD  85 C9                     TEST ECX,ECX
0054CBBF  B8 FC FF FF FF            MOV EAX,0xfffffffc
0054CBC4  74 2F                     JZ 0x0054cbf5
0054CBC6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0054CBC9  BA 38 82 7C 00            MOV EDX,0x7c8238
LAB_0054cbce:
0054CBCE  3B CF                     CMP ECX,EDI
0054CBD0  74 11                     JZ 0x0054cbe3
0054CBD2  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0054CBD5  83 C2 08                  ADD EDX,0x8
0054CBD8  46                        INC ESI
0054CBD9  85 C9                     TEST ECX,ECX
0054CBDB  75 F1                     JNZ 0x0054cbce
0054CBDD  5F                        POP EDI
0054CBDE  5E                        POP ESI
0054CBDF  5D                        POP EBP
0054CBE0  C2 08 00                  RET 0x8
LAB_0054cbe3:
0054CBE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054CBE6  85 C0                     TEST EAX,EAX
0054CBE8  74 09                     JZ 0x0054cbf3
0054CBEA  8B 0C F5 3C 82 7C 00      MOV ECX,dword ptr [ESI*0x8 + 0x7c823c]
0054CBF1  89 08                     MOV dword ptr [EAX],ECX
LAB_0054cbf3:
0054CBF3  33 C0                     XOR EAX,EAX
LAB_0054cbf5:
0054CBF5  5F                        POP EDI
0054CBF6  5E                        POP ESI
0054CBF7  5D                        POP EBP
0054CBF8  C2 08 00                  RET 0x8
