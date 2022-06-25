using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlgorithmStudy05
{
    // 2022-05-20 ~ 2022-06-25
    // Week05
    // 없는 숫자 더하기
    // https://programmers.co.kr/learn/courses/30/lessons/42860
    // 테스트케이스 10~27 (15제외) 에러

    class JoyStick
    {
        Dictionary<char, int> charIndexDic = new Dictionary<char, int>();

        public void InitCharIndex()
        {
            for (int i = 0; i < 13; i++)
            {
                charIndexDic[(char)('A' + (char)i)] = i;
            }

            for (int i = 13; i < 26; i++)
            {
                charIndexDic[(char)('A' + (char)i)] = 26 - i;
            }
        }

        public int CalculateCharCount(string name)
        {
            int count = 0;

            foreach(char ch in name)
            {
                if (ch == 'A') continue;
                count += charIndexDic[ch];
            }

            return count;
        }

        public int MoveLeftRightCount(string name)
        {
            int leftCount = 0;
            int rightCount = 0;
            
            for(int i =1; i<name.Length; i++)
            {
                if(name[i] == 'A' && i == name.Length-1 )
                {
                    break;
                }
                rightCount++;
            }

            for (int i = name.Length-1; i >= 1; i--)
            {
                if (name[i] == 'A' && i == 1)
                {
                    break;
                }
                leftCount++;
            }

            return Math.Min(leftCount, rightCount);
        }

        public int solution(string name)
        {
            int answer = 0;
            InitCharIndex();
            answer += CalculateCharCount(name);
            answer += MoveLeftRightCount(name);

            return answer;
        }

    }
}
