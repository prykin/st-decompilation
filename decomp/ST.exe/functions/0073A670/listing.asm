FUN_0073a670:
0073A670  55                        PUSH EBP
0073A671  8B EC                     MOV EBP,ESP
0073A673  83 EC 08                  SUB ESP,0x8
0073A676  83 3D 94 72 85 00 00      CMP dword ptr [0x00857294],0x0
0073A67D  75 23                     JNZ 0x0073a6a2
0073A67F  E8 BC 0A 00 00            CALL 0x0073b140
0073A684  85 C0                     TEST EAX,EAX
0073A686  74 0A                     JZ 0x0073a692
0073A688  A1 10 BC 85 00            MOV EAX,[0x0085bc10]
0073A68D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073A690  EB 07                     JMP 0x0073a699
LAB_0073a692:
0073A692  C7 45 F8 90 B1 73 00      MOV dword ptr [EBP + -0x8],0x73b190
LAB_0073a699:
0073A699  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073A69C  89 0D 94 72 85 00         MOV dword ptr [0x00857294],ECX
LAB_0073a6a2:
0073A6A2  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073A6A6  75 0A                     JNZ 0x0073a6b2
0073A6A8  E8 E3 08 00 00            CALL 0x0073af90
0073A6AD  E9 CC 00 00 00            JMP 0x0073a77e
LAB_0073a6b2:
0073A6B2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073A6B5  89 15 84 72 85 00         MOV dword ptr [0x00857284],EDX
0073A6BB  83 3D 84 72 85 00 00      CMP dword ptr [0x00857284],0x0
0073A6C2  74 20                     JZ 0x0073a6e4
0073A6C4  A1 84 72 85 00            MOV EAX,[0x00857284]
0073A6C9  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073A6CC  85 C9                     TEST ECX,ECX
0073A6CE  74 14                     JZ 0x0073a6e4
0073A6D0  68 84 72 85 00            PUSH 0x857284
0073A6D5  6A 40                     PUSH 0x40
0073A6D7  68 E0 1C 7F 00            PUSH 0x7f1ce0
0073A6DC  E8 8F 01 00 00            CALL 0x0073a870
0073A6E1  83 C4 0C                  ADD ESP,0xc
LAB_0073a6e4:
0073A6E4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073A6E7  83 C2 40                  ADD EDX,0x40
0073A6EA  89 15 88 72 85 00         MOV dword ptr [0x00857288],EDX
0073A6F0  83 3D 88 72 85 00 00      CMP dword ptr [0x00857288],0x0
0073A6F7  74 20                     JZ 0x0073a719
0073A6F9  A1 88 72 85 00            MOV EAX,[0x00857288]
0073A6FE  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073A701  85 C9                     TEST ECX,ECX
0073A703  74 14                     JZ 0x0073a719
0073A705  68 88 72 85 00            PUSH 0x857288
0073A70A  6A 16                     PUSH 0x16
0073A70C  68 28 1C 7F 00            PUSH 0x7f1c28
0073A711  E8 5A 01 00 00            CALL 0x0073a870
0073A716  83 C4 0C                  ADD ESP,0xc
LAB_0073a719:
0073A719  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073A723  83 3D 84 72 85 00 00      CMP dword ptr [0x00857284],0x0
0073A72A  74 31                     JZ 0x0073a75d
0073A72C  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073A732  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073A735  85 C0                     TEST EAX,EAX
0073A737  74 24                     JZ 0x0073a75d
0073A739  83 3D 88 72 85 00 00      CMP dword ptr [0x00857288],0x0
0073A740  74 14                     JZ 0x0073a756
0073A742  8B 0D 88 72 85 00         MOV ECX,dword ptr [0x00857288]
0073A748  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073A74B  85 D2                     TEST EDX,EDX
0073A74D  74 07                     JZ 0x0073a756
0073A74F  E8 AC 01 00 00            CALL 0x0073a900
0073A754  EB 05                     JMP 0x0073a75b
LAB_0073a756:
0073A756  E8 95 05 00 00            CALL 0x0073acf0
LAB_0073a75b:
0073A75B  EB 21                     JMP 0x0073a77e
LAB_0073a75d:
0073A75D  83 3D 88 72 85 00 00      CMP dword ptr [0x00857288],0x0
0073A764  74 13                     JZ 0x0073a779
0073A766  A1 88 72 85 00            MOV EAX,[0x00857288]
0073A76B  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073A76E  85 C9                     TEST ECX,ECX
0073A770  74 07                     JZ 0x0073a779
0073A772  E8 19 07 00 00            CALL 0x0073ae90
0073A777  EB 05                     JMP 0x0073a77e
LAB_0073a779:
0073A779  E8 12 08 00 00            CALL 0x0073af90
LAB_0073a77e:
0073A77E  83 3D 8C 72 85 00 00      CMP dword ptr [0x0085728c],0x0
0073A785  75 07                     JNZ 0x0073a78e
0073A787  33 C0                     XOR EAX,EAX
0073A789  E9 DE 00 00 00            JMP 0x0073a86c
LAB_0073a78e:
0073A78E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073A791  81 C2 80 00 00 00         ADD EDX,0x80
0073A797  52                        PUSH EDX
0073A798  E8 23 08 00 00            CALL 0x0073afc0
0073A79D  83 C4 04                  ADD ESP,0x4
0073A7A0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073A7A3  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073A7A7  74 13                     JZ 0x0073a7bc
0073A7A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073A7AC  25 FF FF 00 00            AND EAX,0xffff
0073A7B1  50                        PUSH EAX
0073A7B2  FF 15 0C BC 85 00         CALL dword ptr [0x0085bc0c]
0073A7B8  85 C0                     TEST EAX,EAX
0073A7BA  75 07                     JNZ 0x0073a7c3
LAB_0073a7bc:
0073A7BC  33 C0                     XOR EAX,EAX
0073A7BE  E9 A9 00 00 00            JMP 0x0073a86c
LAB_0073a7c3:
0073A7C3  6A 01                     PUSH 0x1
0073A7C5  8B 0D 74 72 85 00         MOV ECX,dword ptr [0x00857274]
0073A7CB  51                        PUSH ECX
0073A7CC  FF 15 08 BC 85 00         CALL dword ptr [0x0085bc08]
0073A7D2  85 C0                     TEST EAX,EAX
0073A7D4  75 07                     JNZ 0x0073a7dd
0073A7D6  33 C0                     XOR EAX,EAX
0073A7D8  E9 8F 00 00 00            JMP 0x0073a86c
LAB_0073a7dd:
0073A7DD  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073A7E1  74 25                     JZ 0x0073a808
0073A7E3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073A7E6  66 A1 74 72 85 00         MOV AX,[0x00857274]
0073A7EC  66 89 02                  MOV word ptr [EDX],AX
0073A7EF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073A7F2  66 8B 15 90 72 85 00      MOV DX,word ptr [0x00857290]
0073A7F9  66 89 51 02               MOV word ptr [ECX + 0x2],DX
0073A7FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073A800  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0073A804  66 89 48 04               MOV word ptr [EAX + 0x4],CX
LAB_0073a808:
0073A808  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073A80C  74 59                     JZ 0x0073a867
0073A80E  6A 40                     PUSH 0x40
0073A810  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073A813  52                        PUSH EDX
0073A814  68 01 10 00 00            PUSH 0x1001
0073A819  A1 74 72 85 00            MOV EAX,[0x00857274]
0073A81E  50                        PUSH EAX
0073A81F  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073A825  85 C0                     TEST EAX,EAX
0073A827  75 04                     JNZ 0x0073a82d
0073A829  33 C0                     XOR EAX,EAX
0073A82B  EB 3F                     JMP 0x0073a86c
LAB_0073a82d:
0073A82D  6A 40                     PUSH 0x40
0073A82F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073A832  83 C1 40                  ADD ECX,0x40
0073A835  51                        PUSH ECX
0073A836  68 02 10 00 00            PUSH 0x1002
0073A83B  8B 15 90 72 85 00         MOV EDX,dword ptr [0x00857290]
0073A841  52                        PUSH EDX
0073A842  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073A848  85 C0                     TEST EAX,EAX
0073A84A  75 04                     JNZ 0x0073a850
0073A84C  33 C0                     XOR EAX,EAX
0073A84E  EB 1C                     JMP 0x0073a86c
LAB_0073a850:
0073A850  6A 0A                     PUSH 0xa
0073A852  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073A855  05 80 00 00 00            ADD EAX,0x80
0073A85A  50                        PUSH EAX
0073A85B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073A85E  51                        PUSH ECX
0073A85F  E8 FC 35 FF FF            CALL 0x0072de60
0073A864  83 C4 0C                  ADD ESP,0xc
LAB_0073a867:
0073A867  B8 01 00 00 00            MOV EAX,0x1
LAB_0073a86c:
0073A86C  8B E5                     MOV ESP,EBP
0073A86E  5D                        POP EBP
0073A86F  C3                        RET
