FUN_0073a900:
0073A900  55                        PUSH EBP
0073A901  8B EC                     MOV EBP,ESP
0073A903  51                        PUSH ECX
0073A904  A1 84 72 85 00            MOV EAX,[0x00857284]
0073A909  50                        PUSH EAX
0073A90A  E8 01 C3 FF FF            CALL 0x00736c10
0073A90F  83 C4 04                  ADD ESP,0x4
0073A912  33 C9                     XOR ECX,ECX
0073A914  83 F8 03                  CMP EAX,0x3
0073A917  0F 94 C1                  SETZ CL
0073A91A  89 0D 80 72 85 00         MOV dword ptr [0x00857280],ECX
0073A920  8B 15 88 72 85 00         MOV EDX,dword ptr [0x00857288]
0073A926  52                        PUSH EDX
0073A927  E8 E4 C2 FF FF            CALL 0x00736c10
0073A92C  83 C4 04                  ADD ESP,0x4
0073A92F  33 C9                     XOR ECX,ECX
0073A931  83 F8 03                  CMP EAX,0x3
0073A934  0F 94 C1                  SETZ CL
0073A937  89 0D 78 72 85 00         MOV dword ptr [0x00857278],ECX
0073A93D  C7 05 74 72 85 00 00 00 00 00  MOV dword ptr [0x00857274],0x0
0073A947  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073A94E  74 09                     JZ 0x0073a959
0073A950  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0073A957  EB 12                     JMP 0x0073a96b
LAB_0073a959:
0073A959  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073A95F  52                        PUSH EDX
0073A960  E8 3B 0A 00 00            CALL 0x0073b3a0
0073A965  83 C4 04                  ADD ESP,0x4
0073A968  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073a96b:
0073A96B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073A96E  A3 7C 72 85 00            MOV [0x0085727c],EAX
0073A973  6A 01                     PUSH 0x1
0073A975  68 C0 A9 73 00            PUSH 0x73a9c0
0073A97A  FF 15 14 BC 85 00         CALL dword ptr [0x0085bc14]
0073A980  8B 0D 8C 72 85 00         MOV ECX,dword ptr [0x0085728c]
0073A986  81 E1 00 01 00 00         AND ECX,0x100
0073A98C  85 C9                     TEST ECX,ECX
0073A98E  74 1C                     JZ 0x0073a9ac
0073A990  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073A996  81 E2 00 02 00 00         AND EDX,0x200
0073A99C  85 D2                     TEST EDX,EDX
0073A99E  74 0C                     JZ 0x0073a9ac
0073A9A0  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073A9A5  83 E0 07                  AND EAX,0x7
0073A9A8  85 C0                     TEST EAX,EAX
0073A9AA  75 0A                     JNZ 0x0073a9b6
LAB_0073a9ac:
0073A9AC  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
LAB_0073a9b6:
0073A9B6  8B E5                     MOV ESP,EBP
0073A9B8  5D                        POP EBP
0073A9B9  C3                        RET
