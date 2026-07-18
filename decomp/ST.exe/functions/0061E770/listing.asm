FUN_0061e770:
0061E770  8B 81 A3 00 00 00         MOV EAX,dword ptr [ECX + 0xa3]
0061E776  85 C0                     TEST EAX,EAX
0061E778  74 48                     JZ 0x0061e7c2
0061E77A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0061E77D  56                        PUSH ESI
0061E77E  57                        PUSH EDI
0061E77F  8B FA                     MOV EDI,EDX
0061E781  D1 EF                     SHR EDI,0x1
0061E783  33 F6                     XOR ESI,ESI
0061E785  85 D2                     TEST EDX,EDX
0061E787  7E 33                     JLE 0x0061e7bc
0061E789  53                        PUSH EBX
0061E78A  3B F2                     CMP ESI,EDX
LAB_0061e78c:
0061E78C  73 0D                     JNC 0x0061e79b
0061E78E  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0061E791  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
0061E794  0F AF D6                  IMUL EDX,ESI
0061E797  03 D3                     ADD EDX,EBX
0061E799  EB 02                     JMP 0x0061e79d
LAB_0061e79b:
0061E79B  33 D2                     XOR EDX,EDX
LAB_0061e79d:
0061E79D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061E7A2  3B F7                     CMP ESI,EDI
0061E7A4  46                        INC ESI
0061E7A5  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0061E7AB  89 42 2A                  MOV dword ptr [EDX + 0x2a],EAX
0061E7AE  8B 81 A3 00 00 00         MOV EAX,dword ptr [ECX + 0xa3]
0061E7B4  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0061E7B7  3B F2                     CMP ESI,EDX
0061E7B9  7C D1                     JL 0x0061e78c
0061E7BB  5B                        POP EBX
LAB_0061e7bc:
0061E7BC  5F                        POP EDI
0061E7BD  C6 41 46 01               MOV byte ptr [ECX + 0x46],0x1
0061E7C1  5E                        POP ESI
LAB_0061e7c2:
0061E7C2  C3                        RET
