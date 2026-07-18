FUN_00750660:
00750660  55                        PUSH EBP
00750661  8B EC                     MOV EBP,ESP
00750663  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00750666  53                        PUSH EBX
00750667  56                        PUSH ESI
00750668  57                        PUSH EDI
00750669  85 C0                     TEST EAX,EAX
0075066B  7E 73                     JLE 0x007506e0
0075066D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00750670  85 C9                     TEST ECX,ECX
00750672  7E 6C                     JLE 0x007506e0
00750674  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00750677  89 0D 14 75 85 00         MOV dword ptr [0x00857514],ECX
0075067D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00750680  2B D0                     SUB EDX,EAX
00750682  2B C8                     SUB ECX,EAX
00750684  A3 08 75 85 00            MOV [0x00857508],EAX
00750689  89 0D 18 75 85 00         MOV dword ptr [0x00857518],ECX
0075068F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00750692  2B C8                     SUB ECX,EAX
00750694  89 15 10 75 85 00         MOV dword ptr [0x00857510],EDX
0075069A  89 0D 0C 75 85 00         MOV dword ptr [0x0085750c],ECX
007506A0  33 C0                     XOR EAX,EAX
007506A2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007506A5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007506A8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007506AB  55                        PUSH EBP
007506AC  8B 6D 28                  MOV EBP,dword ptr [EBP + 0x28]
LAB_007506af:
007506AF  8B 0D 08 75 85 00         MOV ECX,dword ptr [0x00857508]
LAB_007506b5:
007506B5  8A 06                     MOV AL,byte ptr [ESI]
007506B7  46                        INC ESI
007506B8  8A 23                     MOV AH,byte ptr [EBX]
007506BA  43                        INC EBX
007506BB  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
007506BF  88 07                     MOV byte ptr [EDI],AL
007506C1  47                        INC EDI
007506C2  49                        DEC ECX
007506C3  7F F0                     JG 0x007506b5
007506C5  03 35 18 75 85 00         ADD ESI,dword ptr [0x00857518]
007506CB  03 3D 10 75 85 00         ADD EDI,dword ptr [0x00857510]
007506D1  03 1D 0C 75 85 00         ADD EBX,dword ptr [0x0085750c]
007506D7  FF 0D 14 75 85 00         DEC dword ptr [0x00857514]
007506DD  7F D0                     JG 0x007506af
007506DF  5D                        POP EBP
LAB_007506e0:
007506E0  5F                        POP EDI
007506E1  5E                        POP ESI
007506E2  5B                        POP EBX
007506E3  5D                        POP EBP
007506E4  C2 24 00                  RET 0x24
